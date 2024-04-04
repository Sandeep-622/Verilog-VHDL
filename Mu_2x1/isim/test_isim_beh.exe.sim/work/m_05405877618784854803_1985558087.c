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
static const char *ng0 = "/home/sandeep/git_workspace/Verilog-VHDL/Mu_2x1/test.v";
static int ng1[] = {1, 0};



static void Always_42_0(char *t0)
{
    char t3[8];
    char t14[8];
    char *t1;
    char *t2;
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
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1448);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t3, 32, 3, 3U, t12, 1, t9, 1, t6, 1);
    t13 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t3, 32, t13, 32);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    t16 = (t0 + 1608);
    xsi_vlogvar_assign_value(t16, t14, 1, 0, 1);
    t17 = (t0 + 1448);
    xsi_vlogvar_assign_value(t17, t14, 2, 0, 1);
    goto LAB2;

}


extern void work_m_05405877618784854803_1985558087_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_05405877618784854803_1985558087", "isim/test_isim_beh.exe.sim/work/m_05405877618784854803_1985558087.didat");
	xsi_register_executes(pe);
}
