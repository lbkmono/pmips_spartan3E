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
static const char *ng0 = "PC(%d,%b) ALU(%d) Dmem(%d) [%b,%b]";
static const char *ng1 = " ";
static const char *ng2 = "C:/Users/andy.ng/Desktop/Temp/testbenchSub1.V";
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "IMem(PC,Instr),ALU(Output), Dmem(Addr) [Clock,Reset]\n";

void Monitor_55_4(char *);
void Monitor_55_4(char *);


static void Monitor_55_4_Func(char *t0)
{
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

LAB0:    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t1 = (t0 + 3608U);
    t3 = *((char **)t1);
    t1 = (t0 + 3288U);
    t4 = *((char **)t1);
    t1 = (t0 + 2648U);
    t5 = *((char **)t1);
    t1 = (t0 + 4648);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 4808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(0, 0, 3, ng0, 7, t0, (char)118, t2, 16, (char)118, t3, 16, (char)118, t4, 16, (char)118, t5, 16, (char)118, t7, 1, (char)118, t10, 1);
    xsi_vlogfile_write(1, 0, 3, ng1, 1, t0);

LAB1:    return;
}

static void Initial_38_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng2);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_39_1(char *t0)
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

LAB0:    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng2);
    t2 = (t0 + 5784);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng2);
    t4 = (t0 + 4648);
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
    t24 = (t0 + 4648);
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

static void Initial_42_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng2);

LAB4:    xsi_set_current_line(44, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng2);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(46, ng2);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(47, ng2);
    t2 = (t0 + 6032);
    xsi_process_wait(t2, 120000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(48, ng2);
    xsi_vlog_stop(1);
    goto LAB1;

}

static void Initial_51_3(char *t0)
{

LAB0:    xsi_set_current_line(52, ng2);

LAB2:    xsi_set_current_line(53, ng2);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(55, ng2);
    Monitor_55_4(t0);

LAB1:    return;
}

static void Cont_134_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7616);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_135_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

void Monitor_55_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7024);
    t2 = (t0 + 7536);
    xsi_vlogfile_monitor((void *)Monitor_55_4_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003426754765_1949178628_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_39_1,(void *)Initial_42_2,(void *)Initial_51_3,(void *)Cont_134_5,(void *)Cont_135_6,(void *)Monitor_55_4};
	xsi_register_didat("work_m_00000000003426754765_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_00000000003426754765_1949178628.didat");
	xsi_register_executes(pe);
}
