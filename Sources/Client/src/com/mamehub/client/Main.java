package com.mamehub.client;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.InvocationTargetException;
import java.util.logging.LogManager;

import org.apache.commons.io.FileUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import chrriis.common.UIUtils;
import chrriis.dj.nativeswing.swtimpl.NativeInterface;

import com.mamehub.client.login.LoginDialog;
import com.mamehub.client.server.ClientHttpServer;
import com.mamehub.client.upnp.PortOpener;
import com.mamehub.client.utility.CommandLineFlags;
import com.mamehub.client.utility.SwtLoader;

public class Main {
	public static class ProcessKiller implements Runnable {
		final Logger logger = LoggerFactory.getLogger(ProcessKiller.class);

		private Process process;

		public ProcessKiller(Process process) {
			this.process = process;
		}

		@Override
		public void run() {
			logger.info("Kiling subprocess");
			process.destroy();
		}

	}

	public static Thread portOpenerThread;

	public static class MemoryReporter implements Runnable {
		public void run() {
			while (true) {
				try {
					Thread.sleep(1000);
				} catch (InterruptedException e) {
					break;
				}
				Utils.dumpMemoryUsage();
			}
		}
	}
	
	public static class DJKiller implements Runnable {

		@Override
		public void run() {
			NativeInterface.close();
		}
		
	}

	/**
	 * Launch the application.
	 * 
	 * @throws NoSuchMethodException
	 * @throws InvocationTargetException
	 * @throws IllegalAccessException
	 * @throws SecurityException
	 * @throws IllegalArgumentException
	 * @throws ClassNotFoundException
	 * @throws IOException
	 */
	public static void main(String[] args) throws IllegalArgumentException,
			SecurityException, IllegalAccessException,
			InvocationTargetException, NoSuchMethodException,
			ClassNotFoundException, IOException {
		final InputStream inputStream = Main.class
				.getResourceAsStream("/log.properties");
		try {
			LogManager.getLogManager().readConfiguration(inputStream);
		} catch (final IOException e) {
			java.util.logging.Logger.getAnonymousLogger().severe(
					"Could not load default logging.properties file");
			java.util.logging.Logger.getAnonymousLogger().severe(e.getMessage());
		}

		new SwtLoader();
		new CommandLineFlags(args);
		new SoundEngine();

		// new Thread(new MemoryReporter()).start();

		Class<?> c = Class.forName("org.eclipse.swt.widgets.Display");
		c.getMethod("setAppName", String.class).invoke(null, "MAMEHub");

		UIUtils.setPreferredLookAndFeel();
		NativeInterface.open();

		// make ume.ini from mame.ini if it doesn't exist
		if (!new File("ume.ini").exists()) {
			FileUtils.copyFile(new File("mame.ini"), new File("ume.ini"));
		}
		// Delete mame/mess inis if they exist
		new File("mame.ini").delete();
		new File("mess.ini").delete();

		try {
			portOpenerThread = new Thread(new PortOpener(Utils.getApplicationSettings().basePort, Utils.getApplicationSettings().secondaryPort));
			portOpenerThread.start();
			ClientHttpServer clientHttpServer = new ClientHttpServer(Utils.getApplicationSettings().basePort);
			LoginDialog dialog = new LoginDialog(clientHttpServer);
			dialog.setVisible(true);
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		Runtime.getRuntime().addShutdownHook(
				new Thread(new DJKiller()));

		NativeInterface.runEventPump();
	}
}
