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
static const char *ng0 = "Zero";
static const char *ng1 = "First";
static const char *ng2 = "Second";
static const char *ng3 = "Third";
static const char *ng4 = "/home/sandeep/git_workspace/Verilog-VHDL/sequenceDetector/sequenceDetector.v";
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};

void Monitor_33_1(char *);
void Monitor_43_2(char *);
void Monitor_53_3(char *);
void Monitor_63_4(char *);
void Monitor_33_1(char *);
void Monitor_43_2(char *);
void Monitor_53_3(char *);
void Monitor_63_4(char *);


static void Monitor_33_1_Func(char *t0)
{

LAB0:    xsi_vlogfile_write(1, 0, 3, ng0, 1, t0);

LAB1:    return;
}

static void Monitor_43_2_Func(char *t0)
{

LAB0:    xsi_vlogfile_write(1, 0, 3, ng1, 1, t0);

LAB1:    return;
}

static void Monitor_53_3_Func(char *t0)
{

LAB0:    xsi_vlogfile_write(1, 0, 3, ng2, 1, t0);

LAB1:    return;
}

static void Monitor_63_4_Func(char *t0)
{

LAB0:    xsi_vlogfile_write(1, 0, 3, ng3, 1, t0);

LAB1:    return;
}

static void Always_28_0(char *t0)
{
    char t9[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng4);
    t2 = (t0 + 4152);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng4);

LAB5:    xsi_set_current_line(30, ng4);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(72, ng4);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(32, ng4);

LAB16:    xsi_set_current_line(33, ng4);
    Monitor_33_1(t0);
    xsi_set_current_line(34, ng4);
    t2 = (t0 + 2648);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB9:    xsi_set_current_line(42, ng4);

LAB25:    xsi_set_current_line(43, ng4);
    Monitor_43_2(t0);
    xsi_set_current_line(44, ng4);
    t2 = (t0 + 2648);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB11:    xsi_set_current_line(52, ng4);

LAB34:    xsi_set_current_line(53, ng4);
    Monitor_53_3(t0);
    xsi_set_current_line(54, ng4);
    t2 = (t0 + 2648);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB13:    xsi_set_current_line(62, ng4);

LAB43:    xsi_set_current_line(63, ng4);
    Monitor_63_4(t0);
    xsi_set_current_line(64, ng4);
    t2 = (t0 + 2648);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB17:    xsi_set_current_line(35, ng4);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(36, ng4);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1928);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t9, 32, t3, t5, 2, t11, 32, 1);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t14 = (t9 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB21;

LAB18:    if (t25 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t13) = 1;

LAB21:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(39, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB24:    goto LAB15;

LAB20:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(37, ng4);
    t35 = ((char*)((ng8)));
    t36 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 3, 0LL);
    goto LAB24;

LAB26:    xsi_set_current_line(45, ng4);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(46, ng4);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1928);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t9, 32, t3, t5, 2, t11, 32, 1);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t14 = (t9 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB30;

LAB27:    if (t25 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB30:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(49, ng4);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB33:    goto LAB15;

LAB29:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(47, ng4);
    t35 = ((char*)((ng8)));
    t36 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 3, 0LL);
    goto LAB33;

LAB35:    xsi_set_current_line(55, ng4);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng4);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1928);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t9, 32, t3, t5, 2, t11, 32, 1);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t14 = (t9 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB39;

LAB36:    if (t25 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t13) = 1;

LAB39:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(59, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB42:    goto LAB15;

LAB38:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(57, ng4);
    t35 = ((char*)((ng10)));
    t36 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 3, 0LL);
    goto LAB42;

LAB44:    xsi_set_current_line(65, ng4);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(66, ng4);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1928);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t9, 32, t3, t5, 2, t11, 32, 1);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t14 = (t9 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB48;

LAB45:    if (t25 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t13) = 1;

LAB48:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(69, ng4);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB51:    goto LAB15;

LAB47:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(67, ng4);
    t35 = ((char*)((ng8)));
    t36 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 3, 0LL);
    goto LAB51;

}

void Monitor_33_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2896);
    t2 = (t0 + 4168);
    xsi_vlogfile_monitor((void *)Monitor_33_1_Func, t1, t2);

LAB1:    return;
}

void Monitor_43_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3144);
    t2 = (t0 + 4184);
    xsi_vlogfile_monitor((void *)Monitor_43_2_Func, t1, t2);

LAB1:    return;
}

void Monitor_53_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3392);
    t2 = (t0 + 4200);
    xsi_vlogfile_monitor((void *)Monitor_53_3_Func, t1, t2);

LAB1:    return;
}

void Monitor_63_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3640);
    t2 = (t0 + 4216);
    xsi_vlogfile_monitor((void *)Monitor_63_4_Func, t1, t2);

LAB1:    return;
}


extern void work_m_09727198193752776946_3166791073_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Monitor_33_1,(void *)Monitor_43_2,(void *)Monitor_53_3,(void *)Monitor_63_4};
	xsi_register_didat("work_m_09727198193752776946_3166791073", "isim/test_isim_beh.exe.sim/work/m_09727198193752776946_3166791073.didat");
	xsi_register_executes(pe);
}
