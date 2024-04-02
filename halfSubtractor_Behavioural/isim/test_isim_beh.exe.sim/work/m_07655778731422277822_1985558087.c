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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "A = %d | B = %d | DIFFRENCE = %d | BORROW = %d";
static const char *ng1 = "/home/sandeep/git_workspace/Verilog-VHDL/halfSubtractor_Behavioural/test.v";
static int ng2[] = {1, 0};

void Monitor_44_2(char *);
void Monitor_44_2(char *);


static void Monitor_44_2_Func(char *t0)
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

LAB0:    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t3, 1, (char)118, t6, 1, (char)118, t8, 1, (char)118, t9, 1);

LAB1:    return;
}

static void Always_42_0(char *t0)
{
    char t3[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng1);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng1);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t3, 32, 2, 2U, t9, 1, t6, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t3, 32, t10, 32);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    t13 = (t0 + 1608);
    xsi_vlogvar_assign_value(t13, t11, 1, 0, 1);
    goto LAB2;

}

static void Initial_43_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng1);

LAB4:    xsi_set_current_line(44, ng1);
    Monitor_44_2(t0);
    xsi_set_current_line(45, ng1);
    t2 = (t0 + 2736);
    xsi_process_wait(t2, 400000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_44_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2984);
    t2 = (t0 + 3496);
    xsi_vlogfile_monitor((void *)Monitor_44_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_07655778731422277822_1985558087_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Initial_43_1,(void *)Monitor_44_2};
	xsi_register_didat("work_m_07655778731422277822_1985558087", "isim/test_isim_beh.exe.sim/work/m_07655778731422277822_1985558087.didat");
	xsi_register_executes(pe);
}
