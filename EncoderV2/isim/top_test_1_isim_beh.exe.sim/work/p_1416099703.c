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
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );


char *work_p_1416099703_sub_4431873171580203135_220850069(char *t1, char *t2, char *t3, unsigned int t4, unsigned int t5)
{
    char t8[16];
    char *t0;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;

LAB0:    t9 = (t3 + 40U);
    t10 = *((char **)t9);
    t9 = (t10 + t5);
    t11 = *((int *)t9);
    t10 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t8, t11, 4);
    t12 = (t8 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t10, t13);
    t14 = (t8 + 0U);
    t15 = *((int *)t14);
    t16 = (t8 + 4U);
    t17 = *((int *)t16);
    t18 = (t8 + 8U);
    t19 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t15;
    t21 = (t20 + 4U);
    *((int *)t21) = t17;
    t21 = (t20 + 8U);
    *((int *)t21) = t19;
    t22 = (t17 - t15);
    t23 = (t22 * t19);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;

LAB1:    return t0;
LAB2:;
}


extern void work_p_1416099703_init()
{
	static char *se[] = {(void *)work_p_1416099703_sub_4431873171580203135_220850069};
	xsi_register_didat("work_p_1416099703", "isim/top_test_1_isim_beh.exe.sim/work/p_1416099703.didat");
	xsi_register_subprogram_executes(se);
}
