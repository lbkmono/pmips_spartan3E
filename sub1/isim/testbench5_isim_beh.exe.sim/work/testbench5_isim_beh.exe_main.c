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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001088398038_2841360810_init();
    work_m_00000000000335363901_0254784918_init();
    work_m_00000000001242468656_4285008939_init();
    work_m_00000000002896799702_2118011149_init();
    work_m_00000000001088398038_0938072847_init();
    work_m_00000000001088398038_0920550704_init();
    work_m_00000000000259688243_0886308060_init();
    work_m_00000000003730170689_4231019343_init();
    work_m_00000000000833877880_3753204573_init();
    work_m_00000000002341459213_4027410654_init();
    work_m_00000000003572211520_0293302351_init();
    work_m_00000000001546475852_3130889506_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001546475852_3130889506");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
