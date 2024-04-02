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
static const char *ng0 = "/home/sandeep/git_workspace/Verilog-VHDL/fullSubtractor_Behavioural/fullAdder.v";



static void Always_30_0(char *t0)
{
    char t7[8];
    char t22[8];
    char t55[8];
    char t75[8];
    char t90[8];
    char t121[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t21);
    t25 = (t23 ^ t24);
    *((unsigned int *)t22) = t25;
    t20 = (t7 + 4);
    t26 = (t21 + 4);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB9;

LAB10:
LAB11:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t22, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    t5 = (t7 + 4);
    t6 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB17;

LAB16:    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 1U);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t12);
    t30 = (t28 & t29);
    *((unsigned int *)t22) = t30;
    t11 = (t7 + 4);
    t20 = (t12 + 4);
    t21 = (t22 + 4);
    t31 = *((unsigned int *)t11);
    t32 = *((unsigned int *)t20);
    t33 = (t31 | t32);
    *((unsigned int *)t21) = t33;
    t34 = *((unsigned int *)t21);
    t36 = (t34 != 0);
    if (t36 == 1)
        goto LAB18;

LAB19:
LAB20:    t35 = (t0 + 1048U);
    t56 = *((char **)t35);
    memset(t55, 0, 8);
    t35 = (t56 + 4);
    t57 = *((unsigned int *)t35);
    t58 = (~(t57));
    t59 = *((unsigned int *)t56);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t35) == 0)
        goto LAB21;

LAB23:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;

LAB24:    t63 = (t55 + 4);
    t64 = (t56 + 4);
    t65 = *((unsigned int *)t56);
    t66 = (~(t65));
    *((unsigned int *)t55) = t66;
    *((unsigned int *)t63) = 0;
    if (*((unsigned int *)t64) != 0)
        goto LAB26;

LAB25:    t71 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t71 & 1U);
    t72 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t72 & 1U);
    t73 = (t0 + 1208U);
    t74 = *((char **)t73);
    t76 = *((unsigned int *)t55);
    t77 = *((unsigned int *)t74);
    t78 = (t76 ^ t77);
    *((unsigned int *)t75) = t78;
    t73 = (t55 + 4);
    t79 = (t74 + 4);
    t80 = (t75 + 4);
    t81 = *((unsigned int *)t73);
    t82 = *((unsigned int *)t79);
    t83 = (t81 | t82);
    *((unsigned int *)t80) = t83;
    t84 = *((unsigned int *)t80);
    t85 = (t84 != 0);
    if (t85 == 1)
        goto LAB27;

LAB28:
LAB29:    t88 = (t0 + 1368U);
    t89 = *((char **)t88);
    t91 = *((unsigned int *)t75);
    t92 = *((unsigned int *)t89);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t88 = (t75 + 4);
    t94 = (t89 + 4);
    t95 = (t90 + 4);
    t96 = *((unsigned int *)t88);
    t97 = *((unsigned int *)t94);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 != 0);
    if (t100 == 1)
        goto LAB30;

LAB31:
LAB32:    t122 = *((unsigned int *)t22);
    t123 = *((unsigned int *)t90);
    t124 = (t122 | t123);
    *((unsigned int *)t121) = t124;
    t125 = (t22 + 4);
    t126 = (t90 + 4);
    t127 = (t121 + 4);
    t128 = *((unsigned int *)t125);
    t129 = *((unsigned int *)t126);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = *((unsigned int *)t127);
    t132 = (t131 != 0);
    if (t132 == 1)
        goto LAB33;

LAB34:
LAB35:    t149 = (t0 + 1928);
    xsi_vlogvar_assign_value(t149, t121, 0, 0, 1);
    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB8;

LAB9:    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t22) = (t33 | t34);
    goto LAB11;

LAB12:    *((unsigned int *)t7) = 1;
    goto LAB15;

LAB17:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t19 | t23);
    goto LAB16;

LAB18:    t37 = *((unsigned int *)t22);
    t38 = *((unsigned int *)t21);
    *((unsigned int *)t22) = (t37 | t38);
    t26 = (t7 + 4);
    t27 = (t12 + 4);
    t39 = *((unsigned int *)t7);
    t40 = (~(t39));
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t12);
    t44 = (~(t43));
    t45 = *((unsigned int *)t27);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t51 & t49);
    t52 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t52 & t50);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    t54 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t54 & t50);
    goto LAB20;

LAB21:    *((unsigned int *)t55) = 1;
    goto LAB24;

LAB26:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t64);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = *((unsigned int *)t63);
    t70 = *((unsigned int *)t64);
    *((unsigned int *)t63) = (t69 | t70);
    goto LAB25;

LAB27:    t86 = *((unsigned int *)t75);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t75) = (t86 | t87);
    goto LAB29;

LAB30:    t101 = *((unsigned int *)t90);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t90) = (t101 | t102);
    t103 = (t75 + 4);
    t104 = (t89 + 4);
    t105 = *((unsigned int *)t75);
    t106 = (~(t105));
    t107 = *((unsigned int *)t103);
    t108 = (~(t107));
    t109 = *((unsigned int *)t89);
    t110 = (~(t109));
    t111 = *((unsigned int *)t104);
    t112 = (~(t111));
    t113 = (t106 & t108);
    t114 = (t110 & t112);
    t115 = (~(t113));
    t116 = (~(t114));
    t117 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t117 & t115);
    t118 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t118 & t116);
    t119 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t119 & t115);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    goto LAB32;

LAB33:    t133 = *((unsigned int *)t121);
    t134 = *((unsigned int *)t127);
    *((unsigned int *)t121) = (t133 | t134);
    t135 = (t22 + 4);
    t136 = (t90 + 4);
    t137 = *((unsigned int *)t135);
    t138 = (~(t137));
    t139 = *((unsigned int *)t22);
    t140 = (t139 & t138);
    t141 = *((unsigned int *)t136);
    t142 = (~(t141));
    t143 = *((unsigned int *)t90);
    t144 = (t143 & t142);
    t145 = (~(t140));
    t146 = (~(t144));
    t147 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t147 & t145);
    t148 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t148 & t146);
    goto LAB35;

}


extern void work_m_06692946535974562651_1824703890_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_06692946535974562651_1824703890", "isim/test_isim_beh.exe.sim/work/m_06692946535974562651_1824703890.didat");
	xsi_register_executes(pe);
}
