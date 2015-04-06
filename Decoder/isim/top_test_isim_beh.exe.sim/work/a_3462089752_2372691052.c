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
static const char *ng0 = "/home/school/ise_projs/final-year-project/Decoder/top_test.vhd";
extern char *STD_TEXTIO;
extern char *STD_STANDARD;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3564397177;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
void ieee_p_3564397177_sub_2518136782373626985_91900896(char *, char *, char *, unsigned char , unsigned char , int );


static void work_a_3462089752_2372691052_p_0(char *t0)
{
    char t11[16];
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
    char *t12;
    int t13;
    char *t14;
    char *t15;
    unsigned char t16;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3584);
    xsi_process_wait(t2, t8);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3584);
    t4 = (t0 + 3056U);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 1832U);
    t12 = *((char **)t6);
    t6 = (t0 + 7272U);
    t13 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t12, t6);
    t14 = xsi_int_to_mem(t13);
    t15 = xsi_string_variable_get_image(t11, t5, t14);
    std_textio_write7(STD_TEXTIO, t2, t4, t15, t11, (unsigned char)0, 0);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3584);
    t3 = (t0 + 2776U);
    t4 = (t0 + 3056U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB9;

LAB11:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3584);
    t4 = (t0 + 3128U);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t16 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t4, t16, (unsigned char)0, 0);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3584);
    t3 = (t0 + 2880U);
    t4 = (t0 + 3128U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB12;

LAB14:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 7518);
    xsi_report(t2, 9U, 0);
    goto LAB15;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}

static void work_a_3462089752_2372691052_p_1(char *t0)
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

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);

LAB10:    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 4376);
    *((int *)t3) = 0;
    goto LAB2;

LAB9:    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

}


extern void work_a_3462089752_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3462089752_2372691052_p_0,(void *)work_a_3462089752_2372691052_p_1};
	xsi_register_didat("work_a_3462089752_2372691052", "isim/top_test_isim_beh.exe.sim/work/a_3462089752_2372691052.didat");
	xsi_register_executes(pe);
}
