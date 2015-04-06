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
static const char *ng0 = "Function get_substream_size ended without a return statement";



void work_p_0933034474_sub_8278469836703006353_840546410(char *t0, char *t1, char *t2, int t3, char *t4)
{
    char t5[128];
    char t6[32];
    char t7[16];
    char t14[8];
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 16;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (16 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = (t0 + 4712);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t9 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t6 + 4U);
    t18 = (t2 != 0);
    if (t18 == 1)
        goto LAB3;

LAB2:    t19 = (t6 + 12U);
    *((char **)t19) = t7;
    t20 = (t6 + 20U);
    *((int *)t20) = t3;
    t21 = (t6 + 24U);
    *((char **)t21) = t4;
    t22 = (t9 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((int *)t22) = 0;
    t8 = (t0 + 1408U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t24 = (t10 - 1);
    t25 = 0;
    t26 = t24;

LAB4:    if (t25 <= t26)
        goto LAB5;

LAB7:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t8 = (t4 + 0);
    *((int *)t8) = t10;

LAB1:    return;
LAB3:    *((char **)t17) = t2;
    goto LAB2;

LAB5:    t27 = (t25 - 0);
    t11 = (t27 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t25);
    t28 = (4U * t11);
    t29 = (0 + t28);
    t8 = (t2 + t29);
    t30 = *((int *)t8);
    t18 = (t30 == t3);
    if (t18 != 0)
        goto LAB8;

LAB10:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t8 = (t9 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t10;

LAB9:
LAB6:    if (t25 == t26)
        goto LAB7;

LAB11:    t10 = (t25 + 1);
    t25 = t10;
    goto LAB4;

LAB8:    t31 = (t25 + 1);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    *((int *)t13) = t31;
    goto LAB9;

}

char *work_p_0933034474_sub_10154300078974070103_840546410(char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t13[8];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    unsigned int t33;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 16;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (16 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = (t1 + 4520);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, 0);
    t15 = (t8 + 80U);
    *((unsigned int *)t15) = 8U;
    t16 = (t5 + 4U);
    t17 = (t2 != 0);
    if (t17 == 1)
        goto LAB3;

LAB2:    t18 = (t5 + 12U);
    *((char **)t18) = t6;
    t19 = (t5 + 20U);
    *((int *)t19) = t3;
    t20 = (t1 + 1408U);
    t21 = *((char **)t20);
    t22 = *((int *)t21);
    t23 = (t22 - 1);
    t24 = 0;
    t25 = t23;

LAB4:    if (t24 <= t25)
        goto LAB5;

LAB7:    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t10 = (0 + 0U);
    t7 = (t11 + t10);
    *((unsigned char *)t7) = (unsigned char)2;
    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t11, 8U);

LAB1:    return t0;
LAB3:    *((char **)t16) = t2;
    goto LAB2;

LAB5:    t26 = (t24 - 0);
    t10 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t24);
    t27 = (4U * t10);
    t28 = (0 + t27);
    t20 = (t2 + t28);
    t29 = *((int *)t20);
    t30 = (t29 == t3);
    if (t30 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t24 == t25)
        goto LAB7;

LAB12:    t9 = (t24 + 1);
    t24 = t9;
    goto LAB4;

LAB8:    t31 = (t8 + 56U);
    t32 = *((char **)t31);
    t33 = (0 + 0U);
    t31 = (t32 + t33);
    *((unsigned char *)t31) = (unsigned char)3;
    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t10 = (0 + 4U);
    t7 = (t11 + t10);
    *((int *)t7) = t24;
    t7 = (t8 + 56U);
    t11 = *((char **)t7);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t11, 8U);
    goto LAB1;

LAB11:    goto LAB9;

LAB13:;
}

int work_p_0933034474_sub_4182520340311237710_840546410(char *t1, int t2)
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

LAB13:    t0 = 5;

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

LAB15:    goto LAB3;

}

void work_p_0933034474_sub_1959545042775416642_840546410(char *t0, char *t1, char *t2, int t3)
{
    char t4[248];
    char t5[24];
    char t6[16];
    char t13[8];
    char t19[8];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    unsigned char t33;
    int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 16;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (16 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = (t0 + 4712);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, 0);
    t15 = (t8 + 80U);
    *((unsigned int *)t15) = 4U;
    t16 = (t4 + 124U);
    t17 = (t0 + 4712);
    t18 = (t16 + 88U);
    *((char **)t18) = t17;
    t20 = (t16 + 56U);
    *((char **)t20) = t19;
    xsi_type_set_default_value(t17, t19, 0);
    t21 = (t16 + 80U);
    *((unsigned int *)t21) = 4U;
    t22 = (t5 + 4U);
    *((char **)t22) = t2;
    t23 = (t5 + 12U);
    *((char **)t23) = t6;
    t24 = (t5 + 20U);
    *((int *)t24) = t3;
    t25 = (t3 - 1);
    t26 = (t25 - 0);
    t10 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t25);
    t27 = (4U * t10);
    t28 = (0 + t27);
    t29 = (t2 + t28);
    t30 = *((int *)t29);
    t31 = (t16 + 56U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    *((int *)t31) = t30;
    t7 = (t16 + 56U);
    t11 = *((char **)t7);
    t9 = *((int *)t11);
    t33 = (t9 == 0);
    if (t33 != 0)
        goto LAB2;

LAB4:    t9 = (t3 - 2);
    t25 = t9;
    t26 = 0;

LAB5:    if (t25 >= t26)
        goto LAB6;

LAB8:    t7 = (t16 + 56U);
    t11 = *((char **)t7);
    t9 = *((int *)t11);
    t25 = (0 - 0);
    t10 = (t25 * 1);
    t27 = (4U * t10);
    t28 = (0 + t27);
    t7 = (t2 + t28);
    *((int *)t7) = t9;

LAB3:
LAB1:    return;
LAB2:    t7 = (t16 + 56U);
    t12 = *((char **)t7);
    t25 = *((int *)t12);
    t26 = (0 - 0);
    t10 = (t26 * 1);
    t27 = (4U * t10);
    t28 = (0 + t27);
    t7 = (t2 + t28);
    *((int *)t7) = t25;
    goto LAB3;

LAB6:    t30 = (t25 - 0);
    t10 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t25);
    t27 = (4U * t10);
    t28 = (0 + t27);
    t7 = (t2 + t28);
    t34 = *((int *)t7);
    t35 = (t25 + 1);
    t36 = (t35 - 0);
    t37 = (t36 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t35);
    t38 = (4U * t37);
    t39 = (0 + t38);
    t11 = (t2 + t39);
    *((int *)t11) = t34;

LAB7:    if (t25 == t26)
        goto LAB8;

LAB9:    t9 = (t25 + -1);
    t25 = t9;
    goto LAB5;

}

void work_p_0933034474_sub_14565340239987654219_840546410(char *t0, char *t1, char *t2, int t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t13[8];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 16;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (16 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t4 + 4U);
    t11 = (t0 + 4712);
    t12 = (t8 + 88U);
    *((char **)t12) = t11;
    t14 = (t8 + 56U);
    *((char **)t14) = t13;
    xsi_type_set_default_value(t11, t13, 0);
    t15 = (t8 + 80U);
    *((unsigned int *)t15) = 4U;
    t16 = (t5 + 4U);
    *((char **)t16) = t2;
    t17 = (t5 + 12U);
    *((char **)t17) = t6;
    t18 = (t5 + 20U);
    *((int *)t18) = t3;
    t19 = (t0 + 1408U);
    t20 = *((char **)t19);
    t21 = *((int *)t20);
    t22 = (t21 - 1);
    t23 = 1;
    t24 = t22;

LAB2:    if (t23 <= t24)
        goto LAB3;

LAB5:    t9 = (0 - 0);
    t10 = (t9 * 1);
    t27 = (4U * t10);
    t28 = (0 + t27);
    t7 = (t2 + t28);
    *((int *)t7) = t3;

LAB1:    return;
LAB3:    t25 = (t23 - 1);
    t26 = (t25 - 0);
    t10 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t25);
    t27 = (4U * t10);
    t28 = (0 + t27);
    t19 = (t2 + t28);
    t29 = *((int *)t19);
    t30 = (t23 - 0);
    t31 = (t30 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t23);
    t32 = (4U * t31);
    t33 = (0 + t32);
    t34 = (t2 + t33);
    *((int *)t34) = t29;

LAB4:    if (t23 == t24)
        goto LAB5;

LAB6:    t9 = (t23 + 1);
    t23 = t9;
    goto LAB2;

}

void work_p_0933034474_sub_12028596834468880751_840546410(char *t0, char *t1, char *t2, int t3, char *t4, unsigned int t5, unsigned int t6, char *t7)
{
    char t8[128];
    char t9[24];
    char t10[16];
    char t17[8];
    char t23[72];
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned char t26;
    int t27;

LAB0:    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 16;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (16 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t8 + 4U);
    t15 = (t0 + 4712);
    t16 = (t12 + 88U);
    *((char **)t16) = t15;
    t18 = (t12 + 56U);
    *((char **)t18) = t17;
    xsi_type_set_default_value(t15, t17, 0);
    t19 = (t12 + 80U);
    *((unsigned int *)t19) = 4U;
    t20 = (t9 + 4U);
    *((char **)t20) = t2;
    t21 = (t9 + 12U);
    *((char **)t21) = t10;
    t22 = (t9 + 20U);
    *((int *)t22) = t3;
    memcpy(t23, t2, 68U);
    t24 = (t12 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    work_p_0933034474_sub_8278469836703006353_840546410(t0, t1, t23, t3, t24);
    t11 = (t12 + 56U);
    t15 = *((char **)t11);
    t13 = *((int *)t15);
    t26 = (t13 == 0);
    if (t26 != 0)
        goto LAB2;

LAB4:    work_p_0933034474_sub_14565340239987654219_840546410(t0, t1, t2, t3);
    t11 = (t12 + 56U);
    t15 = *((char **)t11);
    t11 = (t15 + 0);
    *((int *)t11) = 1;

LAB3:    t11 = (t12 + 56U);
    t15 = *((char **)t11);
    t13 = *((int *)t15);
    t14 = (0 + t5);
    t11 = (t7 + 56U);
    t16 = *((char **)t11);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    *((int *)t19) = t13;
    xsi_driver_first_trans_delta(t7, t14, 1, 0LL);

LAB1:    return;
LAB2:    t11 = (t12 + 56U);
    t16 = *((char **)t11);
    t27 = *((int *)t16);
    work_p_0933034474_sub_1959545042775416642_840546410(t0, t1, t2, t27);
    t11 = (t12 + 56U);
    t15 = *((char **)t11);
    t13 = *((int *)t15);
    t11 = (t12 + 56U);
    t16 = *((char **)t11);
    t11 = (t16 + 0);
    *((int *)t11) = t13;
    goto LAB3;

}


extern void work_p_0933034474_init()
{
	static char *se[] = {(void *)work_p_0933034474_sub_8278469836703006353_840546410,(void *)work_p_0933034474_sub_10154300078974070103_840546410,(void *)work_p_0933034474_sub_4182520340311237710_840546410,(void *)work_p_0933034474_sub_1959545042775416642_840546410,(void *)work_p_0933034474_sub_14565340239987654219_840546410,(void *)work_p_0933034474_sub_12028596834468880751_840546410};
	xsi_register_didat("work_p_0933034474", "isim/main_isim_beh.exe.sim/work/p_0933034474.didat");
	xsi_register_subprogram_executes(se);
}
