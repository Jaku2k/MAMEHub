package com.mamehub.client.audit;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentMap;

import javax.xml.parsers.ParserConfigurationException;
import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;

import com.mamehub.client.Utils;
import com.mamehub.client.utility.ClientDatabaseEngine;
import com.mamehub.thrift.FileNameLocationPair;
import com.mamehub.thrift.MR;
import com.mamehub.thrift.RomInfo;

public class CartParser extends DefaultHandler implements Runnable {
	final Logger logger = LoggerFactory.getLogger(CartParser.class);

	private String systemName;
	private File xmlFile;

	private Map<String, ArrayList<FileNameLocationPair>> hashEntryMap;

	private Map<String, RomInfo> roms;

	private ConcurrentMap<String, String> chdMap;
	private int count = 0;

	private boolean debug;

	private boolean missingSystem;

	public CartParser(String systemName, File xmlFile,
			Map<String, ArrayList<FileNameLocationPair>> hashEntryMap,
			Map<String, RomInfo> roms, ConcurrentMap<String, String> chdMap,
			boolean missingSystem) {
		this.systemName = systemName;
		this.hashEntryMap = hashEntryMap;
		this.roms = roms;
		this.chdMap = chdMap;
		this.missingSystem = missingSystem;
		if (!systemName.equals(systemName.toLowerCase())) {
			throw new RuntimeException("System names must be lower case");
		}
		this.xmlFile = xmlFile;
		logger.info("Parsing carts for system: " + systemName + " ("
				+ xmlFile.getName() + ")");
	}

	@Override
	public void run() {
		try {
			SAXParserFactory factory = SAXParserFactory.newInstance();
			SAXParser saxParser = null;
			try {
				saxParser = factory.newSAXParser();
				saxParser.parse(new FileInputStream(xmlFile), this);
			} catch (ParserConfigurationException e) {
				throw new IOException(e);
			} catch (SAXException e) {
				throw new IOException(e);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}

		this.hashEntryMap = null;
		this.roms = null;
	}

	@Override
	public void startElement(String uri, String localName, String qName,
			Attributes attributes) throws SAXException {
		if (qName.equals("hash")) {

			// String sha1 = attributes.getValue("sha1");
			String crc32 = attributes.getValue("crc32");
			if (crc32.equalsIgnoreCase("7976248c")) {
				debug = true;
			} else {
				debug = false;
			}
			String cartName = attributes.getValue("name");

			List<FileNameLocationPair> hashEntry = hashEntryMap.get(crc32);

			RomInfo romInfo = new RomInfo();
			if (systemName.contains(":")) {
				throw new RuntimeException("Colons not allowed in system names");
			}
			romInfo.id = systemName + ":" + cartName;
			romInfo.romName = cartName;
			if (hashEntry != null) {
				if (hashEntry.size() > 1) {
					/*
					 * logger.info("Found multiple entries for " + cartName +
					 * ":"); logger.info("***"); for(String s : hashEntry) {
					 * logger.info(s); } logger.info("***");
					 */
					romInfo.filename = hashEntry.iterator().next().location;
				} else if (!hashEntry.isEmpty()) {
					romInfo.filename = hashEntry.iterator().next().location;
				} else {
					romInfo.missingReason = MR.MISSING_FILES;
				}
			} else if (chdMap.containsKey(cartName)) {
				romInfo.filename = chdMap.get(cartName);
			} else {
				romInfo.missingReason = MR.MISSING_FILES;
			}
			romInfo.system = systemName;
			if (missingSystem) {
				romInfo.missingReason = MR.MISSING_SYSTEM;
			}
			// if(romInfo.missingReason == null)
			// logger.info("Got cart: " + romInfo);

			ClientDatabaseEngine auditEngine = Utils.getAuditDatabaseEngine();
			synchronized (auditEngine) {
				// Some of the hsi files are dirty and have carts with duplicate
				// names. If there is a collision, pick one with no errors
				if (!roms.containsKey(romInfo.romName)
						|| romInfo.missingReason == null) {
					roms.put(romInfo.romName, romInfo);
				}
				count++;
				if (count % 1000 == 0) {
					auditEngine.database.commit();
				}
			}
		}
		// logger.info("Start Element :" + qName);
	}

}
