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
static const char *ng0 = "Function get_vq_index_size ended without a return statement";
static const char *ng1 = "Function get_list_index_size ended without a return statement";



int work_p_2894111808_sub_6337822611605353633_2713770422(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 < 2);
    if (t6 != 0)
        goto LAB2;

LAB4:    t6 = (t2 < 4);
    if (t6 != 0)
        goto LAB6;

LAB7:    t6 = (t2 < 8);
    if (t6 != 0)
        goto LAB9;

LAB10:    t6 = (t2 < 16);
    if (t6 != 0)
        goto LAB12;

LAB13:    t6 = (t2 < 32);
    if (t6 != 0)
        goto LAB15;

LAB16:    t6 = (t2 < 64);
    if (t6 != 0)
        goto LAB18;

LAB19:    t0 = 7;

LAB1:    return t0;
LAB2:    t0 = 1;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = 2;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    t0 = 3;
    goto LAB1;

LAB11:    goto LAB3;

LAB12:    t0 = 4;
    goto LAB1;

LAB14:    goto LAB3;

LAB15:    t0 = 5;
    goto LAB1;

LAB17:    goto LAB3;

LAB18:    t0 = 6;
    goto LAB1;

LAB20:    goto LAB3;

LAB21:    goto LAB3;

}

int work_p_2894111808_sub_15095288999580396825_2713770422(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 < 2);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = 2;

LAB1:    return t0;
LAB2:    t0 = 1;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}


extern void work_p_2894111808_init()
{
	static char *se[] = {(void *)work_p_2894111808_sub_6337822611605353633_2713770422,(void *)work_p_2894111808_sub_15095288999580396825_2713770422};
	xsi_register_didat("work_p_2894111808", "isim/top_isim_beh.exe.sim/work/p_2894111808.didat");
	xsi_register_subprogram_executes(se);
}
