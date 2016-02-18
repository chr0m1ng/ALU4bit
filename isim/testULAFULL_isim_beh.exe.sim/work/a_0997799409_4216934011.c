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

/* This file is designed for use with ISim build 0x7dea747 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Gabriel Santos/ULA/c.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_2592010699(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_2592010699(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_2592010699(char *, unsigned char , unsigned char );


static void work_a_0997799409_4216934011_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t3);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t6);
    t8 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t4, t7);
    t1 = (t0 + 1032U);
    t9 = *((char **)t1);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t10);
    t1 = (t0 + 1672U);
    t12 = *((char **)t1);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t11, t13);
    t15 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t8, t14);
    t1 = (t0 + 1032U);
    t16 = *((char **)t1);
    t17 = *((unsigned char *)t16);
    t18 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t17);
    t1 = (t0 + 1192U);
    t19 = *((char **)t1);
    t20 = *((unsigned char *)t19);
    t21 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t20);
    t22 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t18, t21);
    t1 = (t0 + 1352U);
    t23 = *((char **)t1);
    t24 = *((unsigned char *)t23);
    t25 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t22, t24);
    t26 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t15, t25);
    t1 = (t0 + 1032U);
    t27 = *((char **)t1);
    t28 = *((unsigned char *)t27);
    t29 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t28);
    t1 = (t0 + 1192U);
    t30 = *((char **)t1);
    t31 = *((unsigned char *)t30);
    t32 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t29, t31);
    t1 = (t0 + 1352U);
    t33 = *((char **)t1);
    t34 = *((unsigned char *)t33);
    t35 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t34);
    t36 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t32, t35);
    t37 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t26, t36);
    t1 = (t0 + 3392);
    t38 = (t1 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = t37;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t42 = (t0 + 3312);
    *((int *)t42) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0997799409_4216934011_init()
{
	static char *pe[] = {(void *)work_a_0997799409_4216934011_p_0};
	xsi_register_didat("work_a_0997799409_4216934011", "isim/testULAFULL_isim_beh.exe.sim/work/a_0997799409_4216934011.didat");
	xsi_register_executes(pe);
}
