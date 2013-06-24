#include "emu.h"
#include "arm7core.h"
#include "arm7thmb.h"
#include "arm7help.h"

#ifdef ARM7_USE_DRC

arm7thumb_drcophandler drcthumb_handler[0x40*0x10] =
{
// #define THUMB_SHIFT_R       ((UINT16)0x0800)
	drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,
	drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,
	drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,
	drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,      drctg00_0,
	drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,
	drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,
	drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,
	drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,      drctg00_1,
// #define THUMB_INSN_ADDSUB   ((UINT16)0x0800)   // #define THUMB_ADDSUB_TYPE   ((UINT16)0x0600)
	drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,
	drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,
	drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,
	drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,      drctg01_0,
	drctg01_10,     drctg01_10,     drctg01_10,     drctg01_10,     drctg01_10,     drctg01_10,     drctg01_10,     drctg01_10,
	drctg01_11,     drctg01_11,     drctg01_11,     drctg01_11,     drctg01_11,     drctg01_11,     drctg01_11,     drctg01_11,
	drctg01_12,     drctg01_12,     drctg01_12,     drctg01_12,     drctg01_12,     drctg01_12,     drctg01_12,     drctg01_12,
	drctg01_13,     drctg01_13,     drctg01_13,     drctg01_13,     drctg01_13,     drctg01_13,     drctg01_13,     drctg01_13,
// #define THUMB_INSN_CMP      ((UINT16)0x0800)
	drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,
	drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,
	drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,
	drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,      drctg02_0,
	drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,
	drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,
	drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,
	drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,      drctg02_1,
// #define THUMB_INSN_SUB      ((UINT16)0x0800)
	drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,
	drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,
	drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,
	drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,      drctg03_0,
	drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,
	drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,
	drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,
	drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,      drctg03_1,
//#define THUMB_GROUP4_TYPE   ((UINT16)0x0c00)  //#define THUMB_ALUOP_TYPE    ((UINT16)0x03c0)  // #define THUMB_HIREG_OP      ((UINT16)0x0300)  // #define THUMB_HIREG_H       ((UINT16)0x00c0)
	drctg04_00_00,  drctg04_00_01,  drctg04_00_02,  drctg04_00_03,  drctg04_00_04,  drctg04_00_05,  drctg04_00_06,  drctg04_00_07,
	drctg04_00_08,  drctg04_00_09,  drctg04_00_0a,  drctg04_00_0b,  drctg04_00_0c,  drctg04_00_0d,  drctg04_00_0e,  drctg04_00_0f,
	drctg04_01_00,  drctg04_01_01,  drctg04_01_02,  drctg04_01_03,  drctg04_01_10,  drctg04_01_11,  drctg04_01_12,  drctg04_01_13,
	drctg04_01_20,  drctg04_01_21,  drctg04_01_22,  drctg04_01_23,  drctg04_01_30,  drctg04_01_31,  drctg04_01_32,  drctg04_01_33,
	drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,
	drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,
	drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,
	drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,   drctg04_0203,
//#define THUMB_GROUP5_TYPE   ((UINT16)0x0e00)
	drctg05_0,      drctg05_0,      drctg05_0,      drctg05_0,      drctg05_0,      drctg05_0,      drctg05_0,      drctg05_0,
	drctg05_1,      drctg05_1,      drctg05_1,      drctg05_1,      drctg05_1,      drctg05_1,      drctg05_1,      drctg05_1,
	drctg05_2,      drctg05_2,      drctg05_2,      drctg05_2,      drctg05_2,      drctg05_2,      drctg05_2,      drctg05_2,
	drctg05_3,      drctg05_3,      drctg05_3,      drctg05_3,      drctg05_3,      drctg05_3,      drctg05_3,      drctg05_3,
	drctg05_4,      drctg05_4,      drctg05_4,      drctg05_4,      drctg05_4,      drctg05_4,      drctg05_4,      drctg05_4,
	drctg05_5,      drctg05_5,      drctg05_5,      drctg05_5,      drctg05_5,      drctg05_5,      drctg05_5,      drctg05_5,
	drctg05_6,      drctg05_6,      drctg05_6,      drctg05_6,      drctg05_6,      drctg05_6,      drctg05_6,      drctg05_6,
	drctg05_7,      drctg05_7,      drctg05_7,      drctg05_7,      drctg05_7,      drctg05_7,      drctg05_7,      drctg05_7,
//#define THUMB_LSOP_L        ((UINT16)0x0800)
	drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,
	drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,
	drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,
	drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,      drctg06_0,
	drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,
	drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,
	drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,
	drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,      drctg06_1,
//#define THUMB_LSOP_L        ((UINT16)0x0800)
	drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,
	drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,
	drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,
	drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,      drctg07_0,
	drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,
	drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,
	drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,
	drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,      drctg07_1,
// #define THUMB_HALFOP_L      ((UINT16)0x0800)
	drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,
	drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,
	drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,
	drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,      drctg08_0,
	drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,
	drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,
	drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,
	drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,      drctg08_1,
// #define THUMB_STACKOP_L     ((UINT16)0x0800)
	drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,
	drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,
	drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,
	drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,      drctg09_0,
	drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,
	drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,
	drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,
	drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,      drctg09_1,
// #define THUMB_RELADDR_SP    ((UINT16)0x0800)
	drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,
	drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,
	drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,
	drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,      drctg0a_0,
	drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,
	drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,
	drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,
	drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,      drctg0a_1,
// #define THUMB_STACKOP_TYPE  ((UINT16)0x0f00)
	drctg0b_0,      drctg0b_0,      drctg0b_0,      drctg0b_0,      drctg0b_1,      drctg0b_1,      drctg0b_1,      drctg0b_1,
	drctg0b_2,      drctg0b_2,      drctg0b_2,      drctg0b_2,      drctg0b_3,      drctg0b_3,      drctg0b_3,      drctg0b_3,
	drctg0b_4,      drctg0b_4,      drctg0b_4,      drctg0b_4,      drctg0b_5,      drctg0b_5,      drctg0b_5,      drctg0b_5,
	drctg0b_6,      drctg0b_6,      drctg0b_6,      drctg0b_6,      drctg0b_7,      drctg0b_7,      drctg0b_7,      drctg0b_7,
	drctg0b_8,      drctg0b_8,      drctg0b_8,      drctg0b_8,      drctg0b_9,      drctg0b_9,      drctg0b_9,      drctg0b_9,
	drctg0b_a,      drctg0b_a,      drctg0b_a,      drctg0b_a,      drctg0b_b,      drctg0b_b,      drctg0b_b,      drctg0b_b,
	drctg0b_c,      drctg0b_c,      drctg0b_c,      drctg0b_c,      drctg0b_d,      drctg0b_d,      drctg0b_d,      drctg0b_d,
	drctg0b_e,      drctg0b_e,      drctg0b_e,      drctg0b_e,      drctg0b_f,      drctg0b_f,      drctg0b_f,      drctg0b_f,
// #define THUMB_MULTLS        ((UINT16)0x0800)
	drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,
	drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,
	drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,
	drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,      drctg0c_0,
	drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,
	drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,
	drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,
	drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,      drctg0c_1,
// #define THUMB_COND_TYPE     ((UINT16)0x0f00)
	drctg0d_0,      drctg0d_0,      drctg0d_0,      drctg0d_0,      drctg0d_1,      drctg0d_1,      drctg0d_1,      drctg0d_1,
	drctg0d_2,      drctg0d_2,      drctg0d_2,      drctg0d_2,      drctg0d_3,      drctg0d_3,      drctg0d_3,      drctg0d_3,
	drctg0d_4,      drctg0d_4,      drctg0d_4,      drctg0d_4,      drctg0d_5,      drctg0d_5,      drctg0d_5,      drctg0d_5,
	drctg0d_6,      drctg0d_6,      drctg0d_6,      drctg0d_6,      drctg0d_7,      drctg0d_7,      drctg0d_7,      drctg0d_7,
	drctg0d_8,      drctg0d_8,      drctg0d_8,      drctg0d_8,      drctg0d_9,      drctg0d_9,      drctg0d_9,      drctg0d_9,
	drctg0d_a,      drctg0d_a,      drctg0d_a,      drctg0d_a,      drctg0d_b,      drctg0d_b,      drctg0d_b,      drctg0d_b,
	drctg0d_c,      drctg0d_c,      drctg0d_c,      drctg0d_c,      drctg0d_d,      drctg0d_d,      drctg0d_d,      drctg0d_d,
	drctg0d_e,      drctg0d_e,      drctg0d_e,      drctg0d_e,      drctg0d_f,      drctg0d_f,      drctg0d_f,      drctg0d_f,
// #define THUMB_BLOP_LO       ((UINT16)0x0800)
	drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,
	drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,
	drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,
	drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,      drctg0e_0,
	drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,
	drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,
	drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,
	drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,      drctg0e_1,
// #define THUMB_BLOP_LO       ((UINT16)0x0800)
	drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,
	drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,
	drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,
	drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,      drctg0f_0,
	drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,
	drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,
	drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,
	drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,      drctg0f_1,
};

	/* Shift operations */

const void drctg00_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Shift left */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 pc = desc->pc;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	INT32 offs = (op & THUMB_SHIFT_AMT) >> THUMB_SHIFT_AMT_SHIFT;

	UML_MOV(block, I0, DRC_RS); // rrs
	if (offs != 0)
	{
		UML_SHL(block, DRC_RD, DRC_RS, offs);
		UML_AND(block, DRC_CPSR, DRC_CPSR, ~C_MASK);
		UML_TEST(block, I0, 1 << (31 - (offs - 1)));
		UML_MOVc(block, COND_NZ, I1, C_MASK);
		UML_MOVc(block, COND_Z, I1, 0);
		UML_OR(block, DRC_CPSR, I1);
	}
	else
	{
		UML_MOV(block, DRC_RD, DRC_RS);
	}
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_RD);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg00_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Shift right */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 pc = desc->pc;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	INT32 offs = (op & THUMB_SHIFT_AMT) >> THUMB_SHIFT_AMT_SHIFT;

	UML_MOV(block, I0, DRC_RS); // rrs
	if (offs != 0)
	{
		UML_SHR(block, DRC_RD, DRC_RS, offs);
		UML_AND(block, DRC_CPSR, DRC_CPSR, ~C_MASK);
		UML_TEST(block, I0, 1 << (31 - (offs - 1)));
		UML_MOVc(block, COND_NZ, I1, C_MASK);
		UML_MOVc(block, COND_Z, I1, 0);
		UML_OR(block, DRC_CPSR, I1);
	}
	else
	{
		UML_MOV(block, DRC_RD, 0);
		UML_AND(block, DRC_CPSR, DRC_CPSR, ~C_MASK);
		UML_TEST(block, I0, 0x80000000);
		UML_MOVc(block, COND_NZ, I1, C_MASK);
		UML_MOVc(block, COND_Z, I1, 0);
		UML_OR(block, DRC_CPSR, I1);
	}
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_RD);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Arithmetic */

const void drctg01_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	UINT32 pc = desc->pc;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	INT32 offs = (op & THUMB_SHIFT_AMT) >> THUMB_SHIFT_AMT_SHIFT;

	/* ASR.. */
	UML_MOV(block, I0, DRC_RS);
	if (offs == 0)
	{
		offs = 32;
	}
	if (offs >= 32)
	{
		UML_AND(block, DRC_CPSR, DRC_CPSR, ~C_MASK);
		UML_SHR(block, I1, I0, 31);
		UML_TEST(block, I1, ~0);
		UML_MOVc(block, COND_NZ, I1, C_MASK);
		UML_MOVc(block, COND_Z, I1, 0);
		UML_OR(block, DRC_CPSR, DRC_CPSR, I1);
		UML_TEST(block, I0, 0x80000000);
		UML_MOVc(block, COND_NZ, DRC_RD, ~0);
		UML_MOVc(block, COND_Z, DRC_RD, 0);
	}
	else
	{
		UML_AND(block, DRC_CPSR, DRC_CPSR, ~C_MASK);
		UML_TEST(block, I0, 1 << (offs - 1));
		UML_MOVc(block, COND_NZ, I1, C_MASK);
		UML_MOVc(block, COND_Z, I1, 0);
		UML_OR(block, DRC_CPSR, DRC_CPSR, I1);
		UML_SHR(block, I1, I0, offs);
		UML_SHL(block, I2, ~0, 32 - offs);
		UML_TEST(block, I0, 0x80000000);
		UML_MOVc(block, COND_Z, I2, 0);
		UML_OR(block, DRC_RD, I1, I2);
	}
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_RD);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg01_10(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_ADDSUB_RNIMM) >> THUMB_ADDSUB_RNIMM_SHIFT;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_ADD(block, DRC_REG(rd), DRC_REG(rs), DRC_REG(rn));
	DRCHandleThumbALUAddFlags(DRC_REG(rd), DRC_REG(rs), DRC_REG(rn));
}

const void drctg01_11(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* SUB Rd, Rs, Rn */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_ADDSUB_RNIMM) >> THUMB_ADDSUB_RNIMM_SHIFT;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_SUB(block, DRC_REG(rd), DRC_REG(rs), DRC_REG(rn));
	DRCHandleThumbALUSubFlags(DRC_REG(rd), DRC_REG(rs), DRC_REG(rn));
}

const void drctg01_12(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ADD Rd, Rs, #imm */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 imm = (op & THUMB_ADDSUB_RNIMM) >> THUMB_ADDSUB_RNIMM_SHIFT;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_ADD(block, DRC_REG(rd), DRC_REG(rs), imm);
	DRCHandleThumbALUAddFlags(DRC_REG(rd), DRC_REG(rs), imm);
}

const void drctg01_13(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* SUB Rd, Rs, #imm */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 imm = (op & THUMB_ADDSUB_RNIMM) >> THUMB_ADDSUB_RNIMM_SHIFT;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_SUB(block, DRC_REG(rd), DRC_REG(rs), imm);
	DRCHandleThumbALUSubFlags(DRC_REG(rd), DRC_REG(rs), imm);
}

	/* CMP / MOV */

const void drctg02_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_INSN_IMM_RD) >> THUMB_INSN_IMM_RD_SHIFT;
	UINT32 op2 = (op & THUMB_INSN_IMM);
	UML_MOV(block, DRC_REG(rd), op2);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg02_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_INSN_IMM_RD) >> THUMB_INSN_IMM_RD_SHIFT;
	UINT32 op2 = op & THUMB_INSN_IMM;

	UML_SUB(block, I3, DRC_REG(rn), op2);
	DRCHandleThumbALUSubFlags(I3, DRC_REG(rn), op2);
}

	/* ADD/SUB immediate */

const void drctg03_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ADD Rd, #Offset8 */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_INSN_IMM_RD) >> THUMB_INSN_IMM_RD_SHIFT;
	UINT32 op2 = op & THUMB_INSN_IMM;
	UINT32 rd = (op & THUMB_INSN_IMM_RD) >> THUMB_INSN_IMM_RD_SHIFT;
	UML_ADD(block, DRC_REG(rd), DRC_REG(rn), op2);
	DRCHandleThumbALUAddFlags(DRC_REG(rd), DRC_REG(rn), op2);
}

const void drctg03_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* SUB Rd, #Offset8 */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_INSN_IMM_RD) >> THUMB_INSN_IMM_RD_SHIFT;
	UINT32 op2 = op & THUMB_INSN_IMM;
	UINT32 rd = (op & THUMB_INSN_IMM_RD) >> THUMB_INSN_IMM_RD_SHIFT;
	UML_SUB(block, DRC_REG(rd), DRC_REG(rn), op2);
	DRCHandleThumbALUSubFlags(DRC_REG(rd), DRC_REG(rn), op2);
}

	/* Rd & Rm instructions */

const void drctg04_00_00(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* AND Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_AND(block, DRC_REG(rd), DRC_REG(rd), DRC_REG(rs));
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_01(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* EOR Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_XOR(block, DRC_REG(rd), DRC_REG(rd), DRC_REG(rs));
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_02(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* LSL Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	code_label skip;
	code_label offsg32;
	code_label offs32;

	UML_AND(block, I1, DRC_REG(rs), 0xff);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK | C_MASK));

	UML_CMP(block, I1, 0);
	UML_JMPc(block, COND_E, skip = compiler->labelnum++);

	UML_CMP(block, I1, 32);
	UML_JMPc(block, COND_A, offsg32 = compiler->labelnum++);
	UML_JMPc(block, COND_E, offs32 = compiler->labelnum++);

	UML_SHL(block, DRC_REG(rd), DRC_REG(rd), I1);
	UML_SUB(block, I1, I1, 1);
	UML_SUB(block, I1, 31, I1);
	UML_SHL(block, I1, 1, I1);
	UML_TEST(block, DRC_REG(rd), I1);
	UML_MOVc(block, COND_NZ, I0, C_MASK);
	UML_MOVc(block, COND_Z, I0, 0);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_JMP(block, skip);

	UML_LABEL(block, offs32);
	UML_TEST(block, DRC_REG(rd), 1);
	UML_MOVc(block, COND_NZ, I0, C_MASK);
	UML_MOVc(block, COND_Z, I0, 0);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_MOV(block, DRC_REG(rd), 0);
	UML_JMP(block, skip);

	UML_LABEL(block, offsg32);
	UML_MOV(block, DRC_REG(rd), 0);

	UML_LABEL(block, skip);

	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_03(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* LSR Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	code_label skip;
	code_label offsg32;
	code_label offs32;

	UML_AND(block, I1, DRC_REG(rs), 0xff);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK | C_MASK));
	UML_CMP(block, I1, 0);
	UML_JMPc(block, COND_E, skip = compiler->labelnum++);

	UML_CMP(block, I1, 32);
	UML_JMPc(block, COND_A, offsg32 = compiler->labelnum++);
	UML_JMPc(block, COND_E, offs32 = compiler->labelnum++);

	UML_SHR(block, DRC_REG(rd), DRC_REG(rd), I1);
	UML_SUB(block, I1, 1);
	UML_SHL(block, I1, 1, I1);
	UML_TEST(block, DRC_REG(rd), I1);
	UML_MOVc(block, COND_NZ, I0, C_MASK);
	UML_MOVc(block, COND_Z, I0, 0);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_JMP(block, skip);

	UML_LABEL(block, offs32);
	UML_TEST(block, DRC_REG(rd), 0x80000000);
	UML_MOVc(block, COND_NZ, I0, C_MASK);
	UML_MOVc(block, COND_Z, I0, 0);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_MOV(block, DRC_REG(rd), 0);
	UML_JMP(block, skip);

	UML_LABEL(block, offsg32);
	UML_MOV(block, DRC_REG(rd), 0);

	UML_LABEL(block, skip);

	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_04(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ASR Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	code_label skip;
	code_label offsg32;
	code_label offs32;

	UML_MOV(block, I0, DRC_REG(rd));
	UML_AND(block, I1, DRC_REG(rs), 0xff);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK | C_MASK));
	UML_CMP(block, I1, 0);
	UML_JMPc(block, COND_E, skip = compiler->labelnum++);

	UML_SHR(block, I2, I0, I1);
	UML_SUB(block, I1, 32, I1);
	UML_SHL(block, I1, ~0, I1);
	UML_TEST(block, I0, 0x80000000);
	UML_MOVc(block, COND_NZ, DRC_REG(RD), I1);
	UML_MOVc(block, COND_Z, DRC_REG(RD), 0);
	UML_OR(block, DRC_REG(rd), DRC_REG(RD), I2);
	UML_JMPc(block, COND_B, offsl32 = compiler->labelnum++);

	UML_TEST(block, I0, 0x80000000);
	UML_MOVc(block, COND_NZ, DRC_REG(rd), ~0);
	UML_MOVc(block, COND_Z, DRC_REG(rd), 0);
	UML_MOVc(block, COND_NZ, I1, C_MASK);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I1);
	UML_JMP(block, skip);

	UML_LABEL(block, offsl32);
	UML_SUB(block, I1, I1, 1);
	UML_SHL(block, I1, 1, I1);
	UML_TEST(block, I0, I1);
	UML_MOVc(block, COND_NZ, I1, C_MASK);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I1);
	UML_JMP(block, skip);

	UML_LABEL(block, skip);
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);

}

const void drctg04_00_05(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ADC Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_TEST(block, DRC_CPSR, C_MASK);
	UML_MOVc(block, COND_NZ, I3, 1);
	UML_MOVc(block, COND_Z, I3, 0);
	UML_ADD(block, I3, I3, DRC_REG(rd);
	UML_ADD(block, I3, I3, DRC_REG(rs);
	DRCHandleThumbALUAddFlags(I3, DRC_REG(rd), DRC_REG(rs));
	UML_MOV(block, DRC_REG(rd), I3);
}

const void drctg04_00_06(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* SBC Rd, Rs */
{
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_TEST(block, DRC_CPSR, C_MASK);
	UML_MOVc(block, COND_NZ, I3, 0);
	UML_MOVc(block, COND_Z, I3, 1);
	UML_SUB(block, I3, DRC_REG(rs), I3);
	UML_ADD(block, I3, DRC_REG(rd), I3);
	DRCHandleThumbALUSubFlags(I3, DRC_REG(rd), DRC_REG(rs));
	UML_MOV(block, DRC_REG(rd), I3);
}

const void drctg04_00_07(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ROR Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_MOV(block, I0, DRC_REG(rd));
	UML_AND(block, I1, DRC_REG(rs), 0x1f);
	UML_SHR(block, DRC_REG(rd), I0, I1);
	UML_SUB(block, I2, 32, I1);
	UML_SHL(block( I2, I0, I2);
	UML_OR(block, DRC_REG(rd), DRC_REG(rd), I2);
	UML_SUB(block, I1, I1, 1);
	UML_SHL(block, I1, 1, I1);
	UML_TEST(block, I0, I1);
	UML_MOVc(block, COND_NZ, I0, C_MASK);
	UML_MOVc(block, COND_Z, I0, 0);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK | C_MASK));
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CSPR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_08(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* TST Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	UML_AND(block, I2, DRC_REG(rd), DRC_REG(rs));
	DRCHandleALUNZFlags(I2);
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_09(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* NEG Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_MOV(block, I3, DRC_REG(rs));
	UML_SUB(block, DRC_REG(rd), 0, I3);
	DRCHandleThumbALUSubFlags(DRC_REG(rd), 0, I3);
}

const void drctg04_00_0a(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* CMP Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_SUB(block, I3, DRC_REG(rd), DRC_REG(rs));
	DRCHandleThumbALUSubFlags(I3, DRC_REG(rd), DRC_REG(rs));
}

const void drctg04_00_0b(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* CMN Rd, Rs - check flags, add dasm */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_ADD(block, I3, DRC_REG(rd), DRC_REG(rs));
	DRCHandleThumbALUAddFlags(I3, DRC_REG(rd), DRC_REG(rs));
}

const void drctg04_00_0c(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ORR Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_OR(block, DRC_REG(rd), DRC_REG(rd), DRC_REG(rs));
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_0d(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* MUL Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	UML_MULU(block, DRC_REG(rd), I1, DRC_REG(rd), DRC_REG(rs));
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_0e(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* BIC Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	UML_XOR(block, I0, DRC_REG(rs), ~0);
	UML_AND(block, DRC_REG(rd), DRC_REG(rd), I0);
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_00_0f(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* MVN Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_XOR(block, I0, DRC_REG(rs), ~0);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~(Z_MASK | N_MASK));
	DRCHandleALUNZFlags(DRC_REG(rd));
	UML_OR(block, DRC_CPSR, DRC_CPSR, I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* ADD Rd, Rs group */

const void drctg04_01_00(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: G4-1-0 Undefined Thumb instruction: %04x %x\n", pc, op, (op & THUMB_HIREG_H) >> THUMB_HIREG_H_SHIFT);
}

const void drctg04_01_01(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ADD Rd, HRs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_ADD(block, DRC_REG(rd), DRC_REG(rd), DRC_REG(rs+8));
	if (rs == 7)
	{
		UML_ADD(block, DRC_REG(rd), DRC_REG(rd), 4);
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_01_02(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ADD HRd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_ADD(block, DRC_REG(rd+8), DRC_REG(rd+8), DRC_REG(rs));
	if (rd == 7)
	{
		UML_ADD(block, DRC_REG(rd), DRC_REG(rd), 4);
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_01_03(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Add HRd, HRs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_ADD(block, DRC_REG(rd+8), DRC_REG(rd+8), DRC_REG(rs+8));
	// emulate the effects of pre-fetch
	if (rs == 7)
	{
		UML_ADD(block, DRC_REG(rd+8), DRC_REG(rd+8), 4);
	}
	if (rd == 7)
	{
		UML_ADD(block, DRC_REG(rd+8), DRC_REG(rd+8), 2);
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_01_10(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* CMP Rd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_SUB(block, I3, DRC_REG(rd), DRC_REG(rs));
	DRCHandleThumbALUSubFlags(I3, DRC_REG(rd), DRC_REG(rs));
}

const void drctg04_01_11(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* CMP Rd, Hs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_SUB(block, I3, DRC_REG(rd), DRC_REG(rs+8));
	DRCHandleThumbALUSubFlags(I3, DRC_REG(rd), DRC_REG(rs+8));
}

const void drctg04_01_12(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* CMP Hd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT));
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_SUB(block, I3, DRC_REG(rd+8), DRC_REG(rs));
	DRCHandleThumbALUSubFlags(I3, DRC_REG(rd+8), DRC_REG(rs));
}

const void drctg04_01_13(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* CMP Hd, Hs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT));
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_SUB(block, I3, DRC_REG(rd+8), DRC_REG(rs+8));
	DRCHandleThumbALUSubFlags(I3, DRC_REG(rd+8), DRC_REG(rs+8));
}

	/* MOV group */

const void drctg04_01_20(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* MOV Rd, Rs (undefined) */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_MOV(block, DRC_REG(rd), DRC_REG(rs));
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_01_21(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* MOV Rd, Hs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_MOV(block, DRC_REG(rd), DRC_REG(rs+8));
	if (rs == 7)
	{
		UML_ADD(block, DRC_REG(rd), DRC_REG(rd), 4);
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg04_01_22(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* MOV Hd, Rs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_MOV(block, DRC_REG(rd+8), DRC_REG(rs));
	// CHECKME
	if (rd != 7)
	{
		UML_ADD(block, DRC_PC, DRC_PC, 2);
	}
	else
	{
		UML_AND(block, DRC_PC, DRC_PC, ~1);
	}
}

const void drctg04_01_23(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* MOV Hd, Hs */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UINT32 rd = op & THUMB_HIREG_RD;
	UML_MOV(block, DRC_REG(rd+8), DRC_REG(rs+8));
	if (rs == 7)
	{
		UML_ADD(block, DRC_REG(rd+8), DRC_REG(rd+8), 4);
	}
	if (rd != 7)
	{
		UML_ADD(block, DRC_PC, DRC_PC, 2);
	}
	else
	{
		UML_AND(block, DRC_PC, DRC_PC, ~1);
	}

}

const void drctg04_01_30(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	code_label switch_state;
	code_label done;
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UML_MOV(block, I0, DRC_REG(rs);
	UML_TEST(block, I0, 1);
	UML_JMPc(block, COND_Z, switch_state = compiler->labelnum++);
	UML_AND(block, I0, I0, ~1);
	UML_JMP(block, done = compiler->labelnum++);

	UML_LABEL(block, switch_state);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~T_MASK);
	UML_TEST(block, I0, 2);
	UML_MOVc(block, COND_NZ, I1, 2);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_ADD(block, I0, I0, I1);

	UML_LABEL(block, done);
	UML_MOV(block, DRC_PC, I0);
}

const void drctg04_01_31(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	code_label switch_state;
	code_label done;
	UINT32 rs = (op & THUMB_HIREG_RS) >> THUMB_HIREG_RS_SHIFT;
	UML_MOV(block, I0, DRC_REG(rs+8);
	if(rs == 7)
	{
		UML_ADD(block, I0, I0, 2);
	}
	UML_TEST(block, I0, 1);
	UML_JMPc(block, COND_Z, switch_state = compiler->labelnum++);
	UML_AND(block, I0, I0, ~1);
	UML_JMP(block, done = compiler->labelnum++);

	UML_LABEL(block, switch_state);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~T_MASK);
	UML_TEST(block, I0, 2);
	UML_MOVc(block, COND_NZ, I1, 2);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_ADD(block, I0, I0, I1);

	UML_LABEL(block, done);
	UML_MOV(block, DRC_PC, I0);
}

const void drctg04_01_32(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: G4-3 Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg04_01_33(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: G4-3 Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg04_0203(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_INSN_IMM_RD) >> THUMB_INSN_IMM_RD_SHIFT;
	UINT32 imm = 4 + ((op & THUMB_INSN_IMM) << 2);
	UML_AND(block, I0, DRC_PC, ~2);
	UML_ADD(block, I0, I0, imm);
	UML_CALLH(block, *arm->impstate->read32);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* LDR* STR* group */

const void drctg05_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* STR Rd, [Rn, Rm] */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UINT32 addr = GET_REGISTER(arm, rn) + GET_REGISTER(arm, rm);
	UML_MOV(block, I1, DRC_REG(rd));
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->write32);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg05_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* STRH Rd, [Rn, Rm] */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UML_MOV(block, I1, DRC_REG(rd));
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->write16);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg05_2(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* STRB Rd, [Rn, Rm] */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UINT32 addr = GET_REGISTER(arm, rn) + GET_REGISTER(arm, rm);
	UML_MOV(block, I1, DRC_REG(rd));
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->write16);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg05_3(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* LDSB Rd, [Rn, Rm] todo, add dasm */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->read8);
	UML_SEXT(block, DRC_REG(rd), I0, SIZE_BYTE);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg05_4(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* LDR Rd, [Rn, Rm] */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->read32);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg05_5(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* LDRH Rd, [Rn, Rm] */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->read16);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg05_6(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* LDRB Rd, [Rn, Rm] */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->read8);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg05_7(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* LDSH Rd, [Rn, Rm] */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rm = (op & THUMB_GROUP5_RM) >> THUMB_GROUP5_RM_SHIFT;
	UINT32 rn = (op & THUMB_GROUP5_RN) >> THUMB_GROUP5_RN_SHIFT;
	UINT32 rd = (op & THUMB_GROUP5_RD) >> THUMB_GROUP5_RD_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), DRC_REG(rm));
	UML_CALLH(block, *arm->impstate->read16);
	UML_SEXT(block, DRC_REG(rd), I0, SIZE_WORD);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Word Store w/ Immediate Offset */

const void drctg06_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Store */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = op & THUMB_ADDSUB_RD;
	INT32 offs = ((op & THUMB_LSOP_OFFS) >> THUMB_LSOP_OFFS_SHIFT) << 2;
	UML_ADD(block, I0, DRC_REG(rn), offs);
	UML_MOV(block, I1, DRC_REG(rd));
	UML_CALLH(block, *arm->impstate->write32);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg06_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Load */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = op & THUMB_ADDSUB_RD;
	INT32 offs = ((op & THUMB_LSOP_OFFS) >> THUMB_LSOP_OFFS_SHIFT) << 2;
	UML_ADD(block, I0, DRC_REG(rn), offs);
	UML_CALLH(block, *arm->impstate->read32);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Byte Store w/ Immeidate Offset */

const void drctg07_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Store */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = op & THUMB_ADDSUB_RD;
	INT32 offs = (op & THUMB_LSOP_OFFS) >> THUMB_LSOP_OFFS_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), offs);
	UML_MOV(block, I1, DRC_REG(rd));
	UML_CALLH(block, *arm->impstate->write8);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg07_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* Load */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rn = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = op & THUMB_ADDSUB_RD;
	INT32 offs = (op & THUMB_LSOP_OFFS) >> THUMB_LSOP_OFFS_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), offs);
	UML_CALLH(block, *arm->impstate->read8);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Load/Store Halfword */

const void drctg08_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Store */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 offs = (op & THUMB_HALFOP_OFFS) >> THUMB_HALFOP_OFFS_SHIFT;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), offs << 1);
	UML_MOV(block, I1, DRC_REG(rd));
	UML_CALLH(block, *arm->impstate->write16);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg08_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Load */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 offs = (op & THUMB_HALFOP_OFFS) >> THUMB_HALFOP_OFFS_SHIFT;
	UINT32 rs = (op & THUMB_ADDSUB_RS) >> THUMB_ADDSUB_RS_SHIFT;
	UINT32 rd = (op & THUMB_ADDSUB_RD) >> THUMB_ADDSUB_RD_SHIFT;
	UML_ADD(block, I0, DRC_REG(rn), offs << 1);
	UML_CALLH(block, *arm->impstate->read16);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Stack-Relative Load/Store */

const void drctg09_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Store */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_STACKOP_RD) >> THUMB_STACKOP_RD_SHIFT;
	INT32 offs = (UINT8)(op & THUMB_INSN_IMM) << 2;
	UML_ADD(block, I0, DRC_REG(13), offs);
	UML_MOV(block, I1, DRC_REG(rd));
	UML_CALLH(block, *arm->impstate->write32);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg09_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Load */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_STACKOP_RD) >> THUMB_STACKOP_RD_SHIFT;
	UINT32 offs = (UINT8)(op & THUMB_INSN_IMM) << 2;
	UML_ADD(block, I0, DRC_REG(13), offs);
	UML_CALLH(block, *arm->impstate->read32);
	UML_MOV(block, DRC_REG(rd), I0);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Get relative address */

const void drctg0a_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)  /* ADD Rd, PC, #nn */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_RELADDR_RD) >> THUMB_RELADDR_RD_SHIFT;
	INT32 offs = (UINT8)(op & THUMB_INSN_IMM) << 2;
	UML_ADD(block, I0, DRC_PC, 4);
	UML_AND(block, I0, I0, ~2);
	UML_ADD(block, DRC_REG(rd), I0, offs);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg0a_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ADD Rd, SP, #nn */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_RELADDR_RD) >> THUMB_RELADDR_RD_SHIFT;
	INT32 offs = (UINT8)(op & THUMB_INSN_IMM) << 2;
	UML_ADD(block, DRC_REG(rd), DRC_REG(13), offs);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Stack-Related Opcodes */

const void drctg0b_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* ADD SP, #imm */
{
	UINT32 op = desc->opptr.l[0];
	INT32 addr = (op & THUMB_INSN_IMM);
	addr &= ~THUMB_INSN_IMM_S;
	addr = ((op & THUMB_INSN_IMM_S) ? -(addr << 2) : (addr << 2));
	UML_ADD(block, DRC_REG(13), DRC_REG(13), addr);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg0b_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_2(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_3(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_4(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* PUSH {Rlist} */
{
	UINT32 op = desc->opptr.l[0];
	for (INT32 offs = 7; offs >= 0; offs--)
	{
		if (op & (1 << offs))
		{
			UML_SUB(block, DRC_REG(13), DRC_REG(13), 4);
			UML_MOV(block, I0, DRC_REG(13));
			UML_MOV(block, I1, DRC_REG(offs));
			UML_CALLH(block, *arm->impstate->write32);
		}
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg0b_5(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* PUSH {Rlist}{LR} */
{
	UINT32 op = desc->opptr.l[0];
	UML_SUB(block, DRC_REG(13), DRC_REG(13), 4);
	UML_MOV(block, I0, DRC_REG(13));
	UML_MOV(block, I1, DRC_REG(14));
	UML_CALLH(block, *arm->impstate->write32);
	for (INT32 offs = 7; offs >= 0; offs--)
	{
		if (op & (1 << offs))
		{
			UML_SUB(block, DRC_REG(13), DRC_REG(13), 4);
			UML_MOV(block, I0, DRC_REG(13));
			UML_MOV(block, I1, DRC_REG(offs));
			UML_CALLH(block, *arm->impstate->write32);
		}
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg0b_6(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_7(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_8(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_9(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_a(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_b(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void tg0b_c(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* POP {Rlist} */
{
	UINT32 op = desc->opptr.l[0];
	for (INT32 offs = 0; offs < 8; offs++)
	{
		if (op & (1 << offs))
		{
			UML_MOV(block, I0, DRC_REG(13));
			UML_CALLH(block, *arm->impstate->read32);
			UML_MOV(block, DRC_REG(offs), I0);
			UML_ADD(block, DRC_REG(13), DRC_REG(13), 4);
		}
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg0b_d(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* POP {Rlist}{PC} */
{
	UINT32 op = desc->opptr.l[0];
	code_label arch5up;
	code_label done;
	code_label switch_mode;
	for (INT32 offs = 0; offs < 8; offs++)
	{
		if (op & (1 << offs))
		{
			UML_MOV(block, I0, DRC_REG(13));
			UML_CALLH(block, *arm->impstate->read32);
			UML_MOV(block, DRC_REG(offs), I0);
			UML_ADD(block, DRC_REG(13), DRC_REG(13), 4);
		}
	}
	UML_MOV(block, I0, DRC_REG(13));
	UML_CALLH(block, *arm->impstate->read32);
	UML_CMP(block, mem(&arm->archRev), 4);
	UML_JMPc(block, COND_A, arch5up = compiler->labelnum++);
	UML_AND(block, DRC_PC, I0, ~1);

	UML_LABEL(block, arch5up);

	UML_TEST(block, I0, 1);
	UML_JMPc(block, COND_Z, switch_mode = compiler->labelnum++);

	UML_AND(block, I0, I0, ~1);
	UML_MOV(block, DRC_PC, I0);
	UML_JMP(block done);

	UML_LABEL(block, switch_mode);
	UML_AND(block, DRC_CPSR, DRC_CPSR, ~T_MASK);
	UML_TEST(block, I0, 2);
	UML_MOVc(block, COND_NZ, I1, 2);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_ADD(block, I0, I0, I1);
	UML_MOV(block, DRC_PC, I0);

	UML_LABEL(block, done);
	UML_ADD(block, DRC_REG(13), DRC_REG(13), 4);
}

const void drctg0b_e(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

const void drctg0b_f(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Gb Undefined Thumb instruction: %04x\n", pc, op);
}

/* Multiple Load/Store */

// "The address should normally be a word aligned quantity and non-word aligned addresses do not affect the instruction."
// "However, the bottom 2 bits of the address will appear on A[1:0] and might be interpreted by the memory system."

// GBA "BB Ball" performs an unaligned read with A[1:0] = 2 and expects A[1] not to be ignored [BP 800B90A,(R4&3)!=0]
// GBA "Gadget Racers" performs an unaligned read with A[1:0] = 1 and expects A[0] to be ignored [BP B72,(R0&3)!=0]

const void drctg0c_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Store */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_MULTLS_BASE) >> THUMB_MULTLS_BASE_SHIFT;
	UML_MOV(block, I2, DRC_REG(rd));
	for (INT32 offs = 0; offs < 8; offs++)
	{
		if (op & (1 << offs))
		{
			UML_AND(block, I0, I2, ~3);
			UML_MOV(block, I1, DRC_REG(offs));
			UML_CALLH(block, *arm->impstate->write32);
			UML_ADD(block, I2, I2, 4);
		}
	}
	UML_MOV(block, DRC_REG(rd), I2);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg0c_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* Load */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 rd = (op & THUMB_MULTLS_BASE) >> THUMB_MULTLS_BASE_SHIFT;
	int rd_in_list = op & (1 << rd);
	UML_MOV(block, I2, DRC_REG(rd));
	for (INT32 offs = 0; offs < 8; offs++)
	{
		if (op & (1 << offs))
		{
			UML_AND(block, I0, I2, ~1);
			UML_CALLH(block, *arm->impstate->read32);
			UML_ADD(block, I2, I2, 4);
		}
	}
	if (!rd_in_list)
	{
		UML_MOV(block, DRC_REG(rd), I2);
	}
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

	/* Conditional Branch */

const void drctg0d_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_EQ:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, Z_MASK);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_NE:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, Z_MASK);
	UML_MOVc(block, COND_Z, I0, offs);
	UML_MOVc(block, COND_NZ, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_2(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_CS:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, C_MASK);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_3(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_CC:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, C_MASK);
	UML_MOVc(block, COND_Z, I0, offs);
	UML_MOVc(block, COND_NZ, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_4(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_MI:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, N_MASK);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_5(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_PL:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, N_MASK);
	UML_MOVc(block, COND_Z, I0, offs);
	UML_MOVc(block, COND_NZ, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_6(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_VS:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, V_MASK);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_7(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_VC:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, V_MASK);
	UML_MOVc(block, COND_Z, I0, offs);
	UML_MOVc(block, COND_NZ, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_8(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_HI:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, C_MASK);
	UML_MOVc(block, COND_NZ, I0, 1);
	UML_MOVc(block, COND_Z, I0, 0);
	UML_TEST(block, DRC_CPSR, Z_MASK);
	UML_MOVc(block, COND_NZ, I1, 0);
	UML_MOVc(block, COND_Z, I1, 1);
	UML_AND(block, I0, I0, I1);
	UML_TEST(block, I0, 1);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_9(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_LS:
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = ((INT8)(op & THUMB_INSN_IMM) << 1) + 4;
	UML_TEST(block, DRC_CPSR, C_MASK);
	UML_MOVc(block, COND_Z, I0, 1);
	UML_MOVc(block, COND_NZ, I0, 0);
	UML_TEST(block, DRC_CPSR, Z_MASK);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_MOVc(block, COND_NZ, I1, 1);
	UML_AND(block, I0, I0, I1);
	UML_TEST(block, I0, 1);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_a(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_GE:
{
	UINT32 op = desc->opptr.l[0];
	UML_TEST(block, DRC_CPSR, N_MASK);
	UML_MOVc(block, COND_Z, I0, 1);
	UML_MOVc(block, COND_NZ, I0, 0);
	UML_TEST(block, DRC_CPSR, V_MASK);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_MOVc(block, COND_NZ, I1, 1);
	UML_CMP(block, I0, I1);
	UML_MOVc(block, COND_E, I0, offs);
	UML_MOVc(block, COND_NE, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_b(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_LT:
{
	UINT32 op = desc->opptr.l[0];
	UML_TEST(block, DRC_CPSR, N_MASK);
	UML_MOVc(block, COND_Z, I0, 1);
	UML_MOVc(block, COND_NZ, I0, 0);
	UML_TEST(block, DRC_CPSR, V_MASK);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_MOVc(block, COND_NZ, I1, 1);
	UML_CMP(block, I0, I1);
	UML_MOVc(block, COND_NE, I0, offs);
	UML_MOVc(block, COND_E, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_c(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_GT:
{
	UINT32 op = desc->opptr.l[0];
	UML_TEST(block, DRC_CPSR, N_MASK);
	UML_MOVc(block, COND_Z, I0, 1);
	UML_MOVc(block, COND_NZ, I0, 0);
	UML_TEST(block, DRC_CPSR, V_MASK);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_MOVc(block, COND_NZ, I1, 1);
	UML_CMP(block, I0, I1);
	UML_MOVc(block, COND_E, I0, 1);
	UML_MOVc(block, COND_NE, I0, 0);
	UML_TEST(block, DRC_CPSR, Z_MASK);
	UML_MOVc(block, COND_NZ, I1, 1);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_AND(block, I0, I0, I1);
	UML_TEST(block, I0, 1);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_d(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_LE:
{
	UINT32 op = desc->opptr.l[0];
	UML_TEST(block, DRC_CPSR, N_MASK);
	UML_MOVc(block, COND_Z, I0, 1);
	UML_MOVc(block, COND_NZ, I0, 0);
	UML_TEST(block, DRC_CPSR, V_MASK);
	UML_MOVc(block, COND_Z, I1, 0);
	UML_MOVc(block, COND_NZ, I1, 1);
	UML_CMP(block, I0, I1);
	UML_MOVc(block, COND_NE, I0, 1);
	UML_MOVc(block, COND_E, I0, 0);
	UML_TEST(block, DRC_CPSR, Z_MASK);
	UML_MOVc(block, COND_NZ, I1, 0);
	UML_MOVc(block, COND_Z, I1, 1);
	UML_AND(block, I0, I0, I1);
	UML_TEST(block, I0, 1);
	UML_MOVc(block, COND_NZ, I0, offs);
	UML_MOVc(block, COND_Z, I0, 2);
	UML_ADD(block, COND_PC, COND_PC, I0);
}

const void drctg0d_e(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // COND_AL:
{
	UINT32 op = desc->opptr.l[0];
	fatalerror("%08x: Undefined Thumb instruction: %04x (ARM9 reserved)\n", pc, op);
}

const void drctg0d_f(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) // SWI (this is sort of a "hole" in the opcode encoding)
{
	UINT32 op = desc->opptr.l[0];
	UML_MOV(block, mem(&arm->pendingSwi), 1);
	UML_CALLH(block, *arm->impstate->check_irq);
}

	/* B #offs */

const void drctg0e_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	INT32 offs = (op & THUMB_BRANCH_OFFS) << 1;
	if (offs & 0x00000800)
	{
		offs |= 0xfffff800;
	}
	UML_ADD(block, DRC_PC, DRC_PC, offs + 4);
}

const void drctg0e_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	UINT32 offs = (op & THUMB_BLOP_OFFS) << 1;
	UML_MOV(block, I0, DRC_REG(14));
	UML_ADD(block, I0, I0, offs);
	UML_AND(block, I0, I0, ~3);
	UML_ADD(block, DRC_REG(14), DRC_PC, 4);
	UML_OR(block, DRC_REG(14), DRC_REG(14), 1);
	UML_MOV(block, DRC_PC, I0);
}

	/* BL */

const void drctg0f_0(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc)
{
	UINT32 op = desc->opptr.l[0];
	UINT32 addr = (op & THUMB_BLOP_OFFS) << 12;
	if (addr & (1 << 22))
	{
		addr |= 0xff800000;
	}
	addr += 4;
	UML_ADD(block, DRC_REG(14), DRC_PC, addr);
	UML_ADD(block, DRC_PC, DRC_PC, 2);
}

const void drctg0f_1(arm_state *arm, drcuml_block *block, compiler_state *compiler, const opcode_desc *desc) /* BL */
{
	UINT32 op = desc->opptr.l[0];
	UINT32 addr = (op & THUMB_BLOP_OFFS) << 1;
	UML_AND(block, I0, DRC_REG(14), ~1);
	UML_ADD(block, I0, I0, addr);
	UML_ADD(block, DRC_REG(14), DRC_PC, 2);
	UML_OR(block, DRC_REG(14), DRC_REG(14), 1);
	UML_MOV(block, DRC_PC, I0);
}

#endif // ARM7_USE_DRC
