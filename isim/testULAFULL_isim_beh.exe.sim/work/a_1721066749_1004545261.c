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
static const char *ng0 = "C:/Users/Gabriel Santos/ULA/g.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_2592010699(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_2592010699(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_2592010699(char *, unsigned char , unsigned char );


static void work_a_1721066749_1004545261_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t5);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t6, t8);
    t10 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t3, t9);
    t1 = (t0 + 1512U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t1 = (t0 + 1672U);
    t13 = *((char **)t1);
    t14 = *((unsigned char *)t13);
    t15 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t14);
    t16 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t12, t15);
    t17 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t10, t16);
    t1 = (t0 + 1352U);
    t18 = *((char **)t1);
    t19 = *((unsigned char *)t18);
    t1 = (t0 + 1512U);
    t20 = *((char **)t1);
    t21 = *((unsigned char *)t20);
    t22 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t21);
    t23 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t19, t22);
    t24 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t17, t23);
    t1 = (t0 + 1192U);
    t25 = *((char **)t1);
    t26 = *((unsigned char *)t25);
    t1 = (t0 + 1672U);
    t27 = *((char **)t1);
    t28 = *((unsigned char *)t27);
    t29 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t28);
    t30 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t26, t29);
    t31 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t24, t30);
    t1 = (t0 + 3392);
    t32 = (t1 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t31;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t36 = (t0 + 3312);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1721066749_1004545261_init()
{
	static char *pe[] = {(void *)work_a_1721066749_1004545261_p_0};
	xsi_register_didat("work_a_1721066749_1004545261", "isim/testULAFULL_isim_beh.exe.sim/work/a_1721066749_1004545261.didat");
	xsi_register_executes(pe);
}
