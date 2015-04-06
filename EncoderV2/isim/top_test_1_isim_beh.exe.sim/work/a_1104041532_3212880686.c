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
static const char *ng0 = "/home/school/ise_projs/final-year-project/EncoderV2/list.vhd";
extern char *WORK_P_2894111808;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1104041532_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned char t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 3384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = ((WORK_P_2894111808) + 1168U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t1 = (t0 + 5460);
    *((int *)t1) = 1;
    t7 = (t0 + 5464);
    *((int *)t7) = t6;
    t8 = 1;
    t9 = t6;

LAB5:    if (t8 <= t9)
        goto LAB6;

LAB8:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB6:    xsi_set_current_line(51, ng0);
    t10 = (-(1));
    t11 = (t0 + 1968U);
    t12 = *((char **)t11);
    t11 = (t0 + 5460);
    t13 = *((int *)t11);
    t14 = (t13 - 1);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t11));
    t16 = (4U * t15);
    t17 = (0 + t16);
    t18 = (t12 + t17);
    *((int *)t18) = t10;

LAB7:    t1 = (t0 + 5460);
    t8 = *((int *)t1);
    t2 = (t0 + 5464);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB8;

LAB9:    t6 = (t8 + 1);
    t8 = t6;
    t5 = (t0 + 5460);
    *((int *)t5) = t8;
    goto LAB5;

LAB10:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t19 = (t4 == (unsigned char)3);
    if (t19 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB12:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2088U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(57, ng0);
    t1 = ((WORK_P_2894111808) + 1168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 5468);
    *((int *)t1) = 1;
    t5 = (t0 + 5472);
    *((int *)t5) = t6;
    t8 = 1;
    t9 = t6;

LAB15:    if (t8 <= t9)
        goto LAB16;

LAB18:    xsi_set_current_line(64, ng0);
    t1 = ((WORK_P_2894111808) + 1168U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 5476);
    *((int *)t1) = t6;
    t5 = (t0 + 5480);
    *((int *)t5) = 2;
    t8 = t6;
    t9 = 2;

LAB23:    if (t8 >= t9)
        goto LAB24;

LAB26:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 1968U);
    t5 = *((char **)t1);
    t8 = (1 - 1);
    t15 = (t8 * 1);
    t16 = (4U * t15);
    t17 = (0 + t16);
    t1 = (t5 + t17);
    *((int *)t1) = t6;
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 3464);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB13;

LAB16:    xsi_set_current_line(58, ng0);
    t7 = (t0 + 1968U);
    t11 = *((char **)t7);
    t7 = (t0 + 5468);
    t10 = *((int *)t7);
    t13 = (t10 - 1);
    t15 = (t13 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t7));
    t16 = (4U * t15);
    t17 = (0 + t16);
    t12 = (t11 + t17);
    t14 = *((int *)t12);
    t18 = (t0 + 1512U);
    t20 = *((char **)t18);
    t21 = *((int *)t20);
    t3 = (t14 == t21);
    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t6;

LAB20:
LAB17:    t1 = (t0 + 5468);
    t8 = *((int *)t1);
    t2 = (t0 + 5472);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB18;

LAB22:    t6 = (t8 + 1);
    t8 = t6;
    t5 = (t0 + 5468);
    *((int *)t5) = t8;
    goto LAB15;

LAB19:    xsi_set_current_line(59, ng0);
    t18 = (t0 + 5468);
    t22 = (t0 + 2088U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((int *)t22) = *((int *)t18);
    goto LAB20;

LAB24:    xsi_set_current_line(65, ng0);
    t7 = (t0 + 2088U);
    t11 = *((char **)t7);
    t10 = *((int *)t11);
    t3 = (t10 == 0);
    if (t3 != 0)
        goto LAB27;

LAB29:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t4 = (t6 > 1);
    if (t4 == 1)
        goto LAB32;

LAB33:    t3 = (unsigned char)0;

LAB34:    if (t3 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t1 = (t0 + 5476);
    t6 = *((int *)t1);
    t10 = (t6 - 1);
    t15 = (t10 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t1));
    t16 = (4U * t15);
    t17 = (0 + t16);
    t5 = (t2 + t17);
    t13 = *((int *)t5);
    t7 = (t0 + 1968U);
    t11 = *((char **)t7);
    t7 = (t0 + 5476);
    t14 = *((int *)t7);
    t21 = (t14 - 1);
    t27 = (t21 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t7));
    t28 = (4U * t27);
    t29 = (0 + t28);
    t12 = (t11 + t29);
    *((int *)t12) = t13;

LAB28:
LAB25:    t1 = (t0 + 5476);
    t8 = *((int *)t1);
    t2 = (t0 + 5480);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB26;

LAB35:    t6 = (t8 + -1);
    t8 = t6;
    t5 = (t0 + 5476);
    *((int *)t5) = t8;
    goto LAB23;

LAB27:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 1968U);
    t12 = *((char **)t7);
    t7 = (t0 + 5476);
    t13 = *((int *)t7);
    t14 = (t13 - 1);
    t21 = (t14 - 1);
    t15 = (t21 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, t14);
    t16 = (4U * t15);
    t17 = (0 + t16);
    t18 = (t12 + t17);
    t24 = *((int *)t18);
    t20 = (t0 + 1968U);
    t22 = *((char **)t20);
    t20 = (t0 + 5476);
    t25 = *((int *)t20);
    t26 = (t25 - 1);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t20));
    t28 = (4U * t27);
    t29 = (0 + t28);
    t23 = (t22 + t29);
    *((int *)t23) = t24;
    goto LAB28;

LAB30:    xsi_set_current_line(68, ng0);
    t7 = (t0 + 1968U);
    t11 = *((char **)t7);
    t7 = (t0 + 5476);
    t14 = *((int *)t7);
    t21 = (t14 - 1);
    t24 = (t21 - 1);
    t15 = (t24 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, t21);
    t16 = (4U * t15);
    t17 = (0 + t16);
    t12 = (t11 + t17);
    t25 = *((int *)t12);
    t18 = (t0 + 1968U);
    t20 = *((char **)t18);
    t18 = (t0 + 5476);
    t26 = *((int *)t18);
    t30 = (t26 - 1);
    t27 = (t30 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t18));
    t28 = (4U * t27);
    t29 = (0 + t28);
    t22 = (t20 + t29);
    *((int *)t22) = t25;
    goto LAB28;

LAB32:    t1 = (t0 + 2088U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t1 = (t0 + 5476);
    t13 = *((int *)t1);
    t19 = (t10 >= t13);
    t3 = t19;
    goto LAB34;

}


extern void work_a_1104041532_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1104041532_3212880686_p_0};
	xsi_register_didat("work_a_1104041532_3212880686", "isim/top_test_1_isim_beh.exe.sim/work/a_1104041532_3212880686.didat");
	xsi_register_executes(pe);
}
