/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc4ca3437 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "IO[%b,%b,%b] Signals[%b,%b,%0d]";
static const char *ng1 = "C:/Users/andy.ng/Desktop/Temp/testbenchFPGADevice.V";
static int ng2[] = {0, 0};
static const char *ng3 = "\nIO[display,switch0,switch1] Signals[clock,reset,time]";
static int ng4[] = {1, 0};

void Monitor_38_4(char *);
void Monitor_38_4(char *);


static void Monitor_38_4_Func(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;

LAB0:    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = (t0 + 1448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1768);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1928);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = xsi_vlog_time(t14, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 3, ng0, 7, t0, (char)118, t2, 7, (char)118, t4, 1, (char)118, t7, 1, (char)118, t10, 1, (char)118, t13, 1, (char)118, t14, 64);

LAB1:    return;
}

static void Initial_15_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(15, ng1);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_16_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng1);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng1);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_19_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng1);

LAB4:    xsi_set_current_line(21, ng1);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(22, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng1);
    t2 = (t0 + 3152);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(26, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(27, ng1);
    t2 = (t0 + 3152);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(28, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(29, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng1);
    t2 = (t0 + 3152);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(31, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_35_3(char *t0)
{

LAB0:    xsi_set_current_line(36, ng1);

LAB2:    xsi_set_current_line(38, ng1);
    Monitor_38_4(t0);

LAB1:    return;
}

void Monitor_38_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3648);
    t2 = (t0 + 4160);
    xsi_vlogfile_monitor((void *)Monitor_38_4_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003833710969_0596952216_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_16_1,(void *)Initial_19_2,(void *)Initial_35_3,(void *)Monitor_38_4};
	xsi_register_didat("work_m_00000000003833710969_0596952216", "isim/testbench6_isim_beh.exe.sim/work/m_00000000003833710969_0596952216.didat");
	xsi_register_executes(pe);
}
