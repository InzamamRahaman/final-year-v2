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
static const char *ng0 = "/home/school/ise_projs/final-year-project/EncoderV2/top_test_1.vhd";
extern char *IEEE_P_3564397177;
extern char *STD_TEXTIO;

void ieee_p_3564397177_sub_2250825304603680424_91900896(char *, char *, char *, char *, char *, unsigned char , int );


static void work_a_2507786789_2372691052_p_0(char *t0)
{
    char t16[16];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    unsigned char t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2928);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6442);
    t9 = 1;
    if (4U == 4U)
        goto LAB11;

LAB12:    t9 = 0;

LAB13:    t11 = (!(t9));
    if (t11 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2928);
    xsi_process_wait(t2, t8);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(93, ng0);
    t12 = (t0 + 2928);
    t13 = (t0 + 2472U);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    memcpy(t16, t15, 10U);
    t14 = (t0 + 6280U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t12, t13, t16, t14, (unsigned char)0, 0);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2928);
    t3 = (t0 + 2296U);
    t4 = (t0 + 2472U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2928);
    t3 = (t0 + 2472U);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    memcpy(t17, t5, 4U);
    t4 = (t0 + 6296U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t3, t17, t4, (unsigned char)0, 0);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2928);
    t3 = (t0 + 2296U);
    t4 = (t0 + 2472U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB9;

LAB11:    t10 = 0;

LAB14:    if (t10 < 4U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB12;

LAB16:    t10 = (t10 + 1);
    goto LAB14;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}

static void work_a_2507786789_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    unsigned char t9;
    unsigned char t10;

LAB0:    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 3176);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);

LAB10:    t2 = (t0 + 3720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 3720);
    *((int *)t3) = 0;
    goto LAB2;

LAB9:    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

}


extern void work_a_2507786789_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2507786789_2372691052_p_0,(void *)work_a_2507786789_2372691052_p_1};
	xsi_register_didat("work_a_2507786789_2372691052", "isim/top_test_1_isim_beh.exe.sim/work/a_2507786789_2372691052.didat");
	xsi_register_executes(pe);
}
