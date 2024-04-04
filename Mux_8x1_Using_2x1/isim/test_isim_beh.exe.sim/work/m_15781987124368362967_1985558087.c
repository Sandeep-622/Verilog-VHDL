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
static const char *ng0 = "I = %b | S = %b | OUT = %b";
static const char *ng1 = "/home/sandeep/git_workspace/Verilog-VHDL/Mux_8x1_Using_2x1/test.v";
static int ng2[] = {167, 0};
static int ng3[] = {1, 0};

void Monitor_47_3(char *);
void Monitor_47_3(char *);


static void Monitor_47_3_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t3, 8, (char)118, t6, 3, (char)118, t8, 1);

LAB1:    return;
}

static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng1);

LAB2:    xsi_set_current_line(42, ng1);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_44_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng1);
    t2 = (t0 + 2576);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng1);
    t3 = (t0 + 1608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 3, t6, 32);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB2;

}

static void Initial_46_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng1);

LAB4:    xsi_set_current_line(47, ng1);
    Monitor_47_3(t0);
    xsi_set_current_line(48, ng1);
    t2 = (t0 + 2824);
    xsi_process_wait(t2, 800000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_47_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3072);
    t2 = (t0 + 3584);
    xsi_vlogfile_monitor((void *)Monitor_47_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_15781987124368362967_1985558087_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_44_1,(void *)Initial_46_2,(void *)Monitor_47_3};
	xsi_register_didat("work_m_15781987124368362967_1985558087", "isim/test_isim_beh.exe.sim/work/m_15781987124368362967_1985558087.didat");
	xsi_register_executes(pe);
}
