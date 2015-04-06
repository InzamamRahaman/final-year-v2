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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *STD_TEXTIO;
char *IEEE_P_3620187407;
char *WORK_P_0279055419;
char *WORK_P_1429625598;
char *IEEE_P_1242562249;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_p_0279055419_init();
    work_p_1429625598_init();
    work_a_3260609998_1406588223_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    xilinxcorelib_a_4040560389_2959432447_init();
    xilinxcorelib_a_3010993415_1709443946_init();
    xilinxcorelib_a_0599579245_0543512595_init();
    xilinxcorelib_a_1424490697_3212880686_init();
    work_a_1504200489_0992258258_init();
    work_a_0733051271_0504320110_init();
    work_a_1104041532_4151730006_init();
    work_a_2263464102_0503780623_init();
    work_a_1335952598_3212880686_init();
    work_a_3462089752_2372691052_init();


    xsi_register_tops("work_a_3462089752_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    WORK_P_0279055419 = xsi_get_engine_memory("work_p_0279055419");
    WORK_P_1429625598 = xsi_get_engine_memory("work_p_1429625598");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
