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
static const char *ng0 = "/home/school/ise_projs/final-year-project/EncoderV2/encoder.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *STD_STANDARD;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1881823395_3212880686_p_0(char *t0)
{
    char t12[16];
    char t13[16];
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    static char *nl0[] = {&&LAB11, &&LAB10, &&LAB8, &&LAB22, &&LAB9, &&LAB21, &&LAB12, &&LAB13, &&LAB20, &&LAB14, &&LAB15, &&LAB16, &&LAB18, &&LAB17, &&LAB19};

LAB0:    xsi_set_current_line(85, ng0);
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
LAB3:    t1 = (t0 + 5000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(90, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(91, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 5496);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5432);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(97, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t11 = (t10 + 0);
    t1 = (t0 + 5496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(103, ng0);
    t5 = (t0 + 9282);
    xsi_report(t5, 11U, 0);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 4488);
    t2 = (t0 + 4032U);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t10 = *((int *)t7);
    t6 = xsi_int_to_mem(t10);
    t8 = xsi_string_variable_get_image(t12, t5, t6);
    std_textio_write7(STD_TEXTIO, t1, t2, t8, t12, (unsigned char)0, 0);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 4488);
    t2 = (t0 + 3856U);
    t5 = (t0 + 4032U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t5);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB7;

LAB9:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 9293);
    xsi_report(t1, 11U, 0);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 9304);
    xsi_report(t1, 23U, 0);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB11:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 9327);
    xsi_report(t1, 12U, 0);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 4488);
    t2 = (t0 + 4032U);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t10 = *((int *)t7);
    t6 = xsi_int_to_mem(t10);
    t8 = xsi_string_variable_get_image(t12, t5, t6);
    std_textio_write7(STD_TEXTIO, t1, t2, t8, t12, (unsigned char)0, 0);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 4488);
    t2 = (t0 + 3856U);
    t5 = (t0 + 4032U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t5);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 16384);
    if (t3 != 0)
        goto LAB24;

LAB26:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 0);
    if (t3 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB25:    goto LAB7;

LAB12:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 9385);
    xsi_report(t1, 21U, 0);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t11 = (t10 + 1);
    t1 = (t0 + 5496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 9406);
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t10 = *((int *)t6);
    t5 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t10, 8);
    t8 = ((IEEE_P_2592010699) + 4000);
    t9 = (t14 + 0U);
    t15 = (t9 + 0U);
    *((int *)t15) = 0;
    t15 = (t9 + 4U);
    *((int *)t15) = 1;
    t15 = (t9 + 8U);
    *((int *)t15) = 1;
    t11 = (1 - 0);
    t16 = (t11 * 1);
    t16 = (t16 + 1);
    t15 = (t9 + 12U);
    *((unsigned int *)t15) = t16;
    t7 = xsi_base_array_concat(t7, t13, t8, (char)97, t1, t14, (char)97, t5, t12, (char)101);
    t15 = (t12 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    t17 = (2U + t16);
    t3 = (10U != t17);
    if (t3 == 1)
        goto LAB29;

LAB30:    t18 = (t0 + 5304);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 10U);
    xsi_driver_first_trans_delta(t18, 0U, 10U, 0LL);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 9408);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB13:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t11 = (t10 + 1);
    t1 = (t0 + 5496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)10;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB7;

LAB14:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 1);
    if (t3 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);

LAB35:    goto LAB7;

LAB15:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 1);
    if (t3 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)14;
    xsi_driver_first_trans_fast(t1);

LAB38:    goto LAB7;

LAB16:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 9412);
    t3 = (2U != 2U);
    if (t3 == 1)
        goto LAB40;

LAB41:    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_delta(t5, 1U, 2U, 0LL);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 9414);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(173, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB17:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 9418);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB18:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 9422);
    xsi_report(t1, 6U, 0);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 5304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 1);
    if (t3 != 0)
        goto LAB42;

LAB44:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 2);
    if (t3 != 0)
        goto LAB45;

LAB46:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 9438);
    t3 = (3U != 3U);
    if (t3 == 1)
        goto LAB49;

LAB50:    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t5, 2U, 3U, 0LL);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t10, 4);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t5, 5U, 4U, 0LL);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 9441);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB43:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB19:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 9445);
    xsi_report(t1, 6U, 0);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 1);
    if (t3 != 0)
        goto LAB51;

LAB53:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t3 = (t10 == 2);
    if (t3 != 0)
        goto LAB54;

LAB55:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 9461);
    t3 = (3U != 3U);
    if (t3 == 1)
        goto LAB58;

LAB59:    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t5, 1U, 3U, 0LL);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t10, 4);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t5, 4U, 4U, 0LL);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 9464);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB52:    xsi_set_current_line(214, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB20:    xsi_set_current_line(216, ng0);
    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB21:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 9468);
    xsi_report(t1, 4U, 0);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(222, ng0);
    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB22:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 9472);
    xsi_report(t1, 12U, 0);
    xsi_set_current_line(227, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(228, ng0);
    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(229, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB23:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 9484);
    xsi_report(t1, 13U, 0);
    xsi_set_current_line(232, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB7;

LAB24:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 9339);
    xsi_report(t1, 27U, 0);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 9366);
    xsi_report(t1, 19U, 0);
    goto LAB25;

LAB27:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 5112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 5176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB25;

LAB29:    xsi_size_not_matching(10U, t17, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 5112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 5112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)11;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 5112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)13;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB40:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 5304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t10, 2);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_delta(t5, 3U, 2U, 0LL);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 9428);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB43;

LAB45:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 9432);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB47;

LAB48:    t6 = (t0 + 5304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    memcpy(t15, t1, 2U);
    xsi_driver_first_trans_delta(t6, 2U, 2U, 0LL);
    xsi_set_current_line(190, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t10, 3);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t5, 4U, 3U, 0LL);
    xsi_set_current_line(191, ng0);
    t1 = (t0 + 9434);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB43;

LAB47:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB50;

LAB51:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 5304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t10, 2);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_delta(t5, 2U, 2U, 0LL);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 9451);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB52;

LAB54:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 9455);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB56;

LAB57:    t6 = (t0 + 5304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    memcpy(t15, t1, 2U);
    xsi_driver_first_trans_delta(t6, 1U, 2U, 0LL);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t10, 3);
    t5 = (t0 + 5304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_delta(t5, 3U, 3U, 0LL);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 9457);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB52;

LAB56:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB57;

LAB58:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB59;

}


extern void work_a_1881823395_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1881823395_3212880686_p_0};
	xsi_register_didat("work_a_1881823395_3212880686", "isim/top_test_1_isim_beh.exe.sim/work/a_1881823395_3212880686.didat");
	xsi_register_executes(pe);
}
