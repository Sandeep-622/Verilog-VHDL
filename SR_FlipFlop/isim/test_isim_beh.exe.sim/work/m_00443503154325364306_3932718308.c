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
static const char *ng0 = "/home/sandeep/git_workspace/Verilog-VHDL/SR_FlipFlop/SR_FlipFlop.v";



static void Always_29_0(char *t0)
{
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3480);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t5 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB6;

LAB7:
LAB8:    memset(t4, 0, 8);
    t39 = (t8 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t39) == 0)
        goto LAB9;

LAB11:    t45 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t45) = 1;

LAB12:    t46 = (t4 + 4);
    t47 = (t8 + 4);
    t48 = *((unsigned int *)t8);
    t49 = (~(t48));
    *((unsigned int *)t4) = t49;
    *((unsigned int *)t46) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB14;

LAB13:    t54 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t54 & 1U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 1U);
    t56 = (t0 + 2088);
    xsi_vlogvar_assign_value(t56, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t5);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t7 = (t8 + 4);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t7);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB15;

LAB16:
LAB17:    memset(t4, 0, 8);
    t21 = (t8 + 4);
    t40 = *((unsigned int *)t21);
    t41 = (~(t40));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t21) == 0)
        goto LAB18;

LAB20:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;

LAB21:    t39 = (t4 + 4);
    t45 = (t8 + 4);
    t48 = *((unsigned int *)t8);
    t49 = (~(t48));
    *((unsigned int *)t4) = t49;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB23;

LAB22:    t54 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t54 & 1U);
    t55 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t55 & 1U);
    t46 = (t0 + 2248);
    xsi_vlogvar_assign_value(t46, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2088);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t13 = (t5 + 4);
    t21 = (t12 + 4);
    t22 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t21);
    t16 = (t14 | t15);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB24;

LAB25:
LAB26:    memset(t4, 0, 8);
    t46 = (t8 + 4);
    t40 = *((unsigned int *)t46);
    t41 = (~(t40));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t46) == 0)
        goto LAB27;

LAB29:    t47 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t47) = 1;

LAB30:    t56 = (t4 + 4);
    t57 = (t8 + 4);
    t48 = *((unsigned int *)t8);
    t49 = (~(t48));
    *((unsigned int *)t4) = t49;
    *((unsigned int *)t56) = 0;
    if (*((unsigned int *)t57) != 0)
        goto LAB32;

LAB31:    t54 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t54 & 1U);
    t55 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t55 & 1U);
    t58 = (t0 + 1768);
    xsi_vlogvar_assign_value(t58, t4, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t13 = (t5 + 4);
    t21 = (t12 + 4);
    t22 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t21);
    t16 = (t14 | t15);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t4, 0, 8);
    t46 = (t8 + 4);
    t40 = *((unsigned int *)t46);
    t41 = (~(t40));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t46) == 0)
        goto LAB36;

LAB38:    t47 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t47) = 1;

LAB39:    t56 = (t4 + 4);
    t57 = (t8 + 4);
    t48 = *((unsigned int *)t8);
    t49 = (~(t48));
    *((unsigned int *)t4) = t49;
    *((unsigned int *)t56) = 0;
    if (*((unsigned int *)t57) != 0)
        goto LAB41;

LAB40:    t54 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t54 & 1U);
    t55 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t55 & 1U);
    t58 = (t0 + 1928);
    xsi_vlogvar_assign_value(t58, t4, 0, 0, 1);
    goto LAB2;

LAB6:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t6 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB8;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB14:    t50 = *((unsigned int *)t4);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t4) = (t50 | t51);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t46) = (t52 | t53);
    goto LAB13;

LAB15:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t19 | t20);
    t12 = (t3 + 4);
    t13 = (t5 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB23:    t50 = *((unsigned int *)t4);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t4) = (t50 | t51);
    t52 = *((unsigned int *)t39);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t52 | t53);
    goto LAB22;

LAB24:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t8) = (t19 | t20);
    t39 = (t5 + 4);
    t45 = (t12 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t39);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t45);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t35 & t33);
    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB26;

LAB27:    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB32:    t50 = *((unsigned int *)t4);
    t51 = *((unsigned int *)t57);
    *((unsigned int *)t4) = (t50 | t51);
    t52 = *((unsigned int *)t56);
    t53 = *((unsigned int *)t57);
    *((unsigned int *)t56) = (t52 | t53);
    goto LAB31;

LAB33:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t8) = (t19 | t20);
    t39 = (t5 + 4);
    t45 = (t12 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t39);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t45);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t35 & t33);
    t36 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB35;

LAB36:    *((unsigned int *)t4) = 1;
    goto LAB39;

LAB41:    t50 = *((unsigned int *)t4);
    t51 = *((unsigned int *)t57);
    *((unsigned int *)t4) = (t50 | t51);
    t52 = *((unsigned int *)t56);
    t53 = *((unsigned int *)t57);
    *((unsigned int *)t56) = (t52 | t53);
    goto LAB40;

}


extern void work_m_00443503154325364306_3932718308_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00443503154325364306_3932718308", "isim/test_isim_beh.exe.sim/work/m_00443503154325364306_3932718308.didat");
	xsi_register_executes(pe);
}
