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
static const char *ng0 = "/home/school/ise_projs/final-year-project/Decoder/data_controller.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_0279055419;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0733051271_0504320110_p_0(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(88, ng0);
    t1 = xsi_get_transient_memory(18U);
    memset(t1, 0, 18U);
    t5 = t1;
    memset(t5, (unsigned char)2, 18U);
    t6 = (t0 + 4184);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 18U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4376);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t1 = ((WORK_P_0279055419) + 1888U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t3 = (t11 >= t12);
    if (t3 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 4376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB8:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t13 = (t4 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t3 = (unsigned char)0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7160U);
    t5 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t17, t2, t1, 0);
    t6 = (t0 + 4184);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 18U);
    xsi_driver_first_trans_fast(t6);

LAB11:    goto LAB3;

LAB7:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 7263);
    xsi_report(t1, 23U, 0);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2152U);
    t6 = *((char **)t1);
    t11 = *((int *)t6);
    t1 = ((WORK_P_0279055419) + 1888U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    t16 = (t11 < t12);
    if (t16 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 4376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB17:    goto LAB11;

LAB13:    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t14 = *((unsigned char *)t5);
    t15 = (t14 == (unsigned char)2);
    t3 = t15;
    goto LAB15;

LAB16:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t1 = (t0 + 7160U);
    t9 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t17, t8, t1, 1);
    t10 = (t0 + 4184);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 18U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (t11 + 1);
    t1 = (t0 + 4248);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}


extern void work_a_0733051271_0504320110_init()
{
	static char *pe[] = {(void *)work_a_0733051271_0504320110_p_0};
	xsi_register_didat("work_a_0733051271_0504320110", "isim/top_test_isim_beh.exe.sim/work/a_0733051271_0504320110.didat");
	xsi_register_executes(pe);
}
