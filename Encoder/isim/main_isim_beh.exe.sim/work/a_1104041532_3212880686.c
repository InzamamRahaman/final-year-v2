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
    char *t3;
    int t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1648U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 68U);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((int *)t2);
    t1 = (t0 + 1768U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = t4;
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2552);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768U);
    t5 = *((char **)t2);
    t4 = *((int *)t5);
    t2 = (t0 + 1312U);
    t6 = (t0 + 3144);
    work_p_0933034474_sub_12028596834468880751_840546410(WORK_P_0933034474, t1, t3, t4, t2, 0U, 0U, t6);
    t1 = (t0 + 3064);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_1104041532_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1104041532_3212880686_p_0};
	xsi_register_didat("work_a_1104041532_3212880686", "isim/main_isim_beh.exe.sim/work/a_1104041532_3212880686.didat");
	xsi_register_executes(pe);
}
