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
static const char *ng0 = "/home/school/ise_projs/final-year-project/Encoder/list.vhd";
extern char *WORK_P_0933034474;

void work_p_0933034474_sub_12028596834468880751_840546410(char *, char *, char *, int , char *, unsigned int , unsigned int , char *);


static void work_a_1104041532_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 == 0);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1648U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 68U);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 1768U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t3;
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2552);
    t2 = (t0 + 1648U);
    t5 = *((char **)t2);
    t2 = (t0 + 1768U);
    t6 = *((char **)t2);
    t3 = *((int *)t6);
    t2 = (t0 + 1312U);
    t7 = (t0 + 3144);
    work_p_0933034474_sub_12028596834468880751_840546410(WORK_P_0933034474, t1, t5, t3, t2, 0U, 0U, t7);

LAB3:    t1 = (t0 + 3064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3144);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}


extern void work_a_1104041532_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1104041532_3212880686_p_0};
	xsi_register_didat("work_a_1104041532_3212880686", "isim/main_test_isim_beh.exe.sim/work/a_1104041532_3212880686.didat");
	xsi_register_executes(pe);
}
