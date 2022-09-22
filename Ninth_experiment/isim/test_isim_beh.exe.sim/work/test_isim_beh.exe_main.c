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
    xilinxcorelib_ver_m_00000000001358910285_1420689212_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_2071529310_init();
    xilinxcorelib_ver_m_00000000001603977570_1633463103_init();
    work_m_00000000002489990758_2456437516_init();
    work_m_00000000003082423822_1733832700_init();
    work_m_00000000000205981652_0044675170_init();
    work_m_00000000003724314430_2591919354_init();
    work_m_00000000003756414649_3477562538_init();
    xilinxcorelib_ver_m_00000000000277421008_0044064871_init();
    xilinxcorelib_ver_m_00000000001603977570_1450289848_init();
    work_m_00000000000403262735_2356217838_init();
    work_m_00000000003088341011_3508565487_init();
    work_m_00000000002098128992_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002098128992_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
