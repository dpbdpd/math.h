#include "unittests.h"

#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(s21_log_test1) {
  double x = 1;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), EPSILON_6);
}
END_TEST

START_TEST(s21_log_test2) {
  double x = 1.23443;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), EPSILON_6);
}
END_TEST

START_TEST(s21_log_test3) {
  double x = 10.343453;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), EPSILON_6);
}
END_TEST

START_TEST(s21_log_test4) {
  double x = 50000000000;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), EPSILON_6);
}
END_TEST

START_TEST(s21_log_test5) {
  double x = 6546547567.65756756;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), EPSILON_6);
}
END_TEST

START_TEST(s21_log_test6) {
  double x = 10765.343453;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), EPSILON_6);
}
END_TEST

START_TEST(s21_log_test7) {
  double x = NAN;
  ck_assert_int_eq(isnan(log(x)), isnan(s21_log(x)));
}
END_TEST

START_TEST(s21_log_test8) {
  double x = INFINITY;
  ck_assert_int_eq(isinf(log(x)), isinf(s21_log(x)));
}
END_TEST

START_TEST(s21_log_test9) {
  double x = -INFINITY;
  ck_assert_int_eq(isnan(log(x)), isnan(s21_log(x)));
}
END_TEST

START_TEST(s21_log_test10) {
  double x = -6546547567.65756756;
  ck_assert_int_eq(isnan(s21_log(x)), 1);
}
END_TEST

START_TEST(s21_log_test11) {
  double x = -20;
  ck_assert_int_eq(isnan(s21_log(x)), 1);
}
END_TEST

START_TEST(s21_log_test12) {
  double x = -EPSILON_7;
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

START_TEST(s21_log_test13) {
  double x = 10232432430046545654645540012.534534;
  ck_assert_ldouble_eq_tol(log(x), s21_log(x), EPSILON_6);
}
END_TEST

START_TEST(s21_log_test14) {
  double x = 0;
  ck_assert_int_ne(isinf(s21_log(x)), 0);
}
END_TEST

START_TEST(s21_pow_test1) {
  double x = 2;
  double y = 3;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test2) {
  double x = 2.43245;
  double y = -3.0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test3) {
  double x = 8323;
  double y = 1.9876;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test4) {
  double x = 7092.01;
  double y = -2.655251;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test5) {
  double x = 4;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test6) {
  double x = 6;
  double y = INFINITY;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test7) {
  double x = 2;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test8) {
  double x = 4;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test9) {
  double x = -122322;
  double y = 3;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test10) {
  double x = -10324.0;
  double y = -3.0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test11) {
  double x = -62;
  double y = 1.456;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test12) {
  double x = -2;
  double y = -1.5436;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test13) {
  double x = -3;
  double y = INFINITY;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}

START_TEST(s21_pow_test14) {
  double x = -10;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test15) {
  double x = -10;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test16) {
  double x = -10;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test17) {
  double x = 0;
  double y = 2;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test18) {
  double x = 0;
  double y = -54;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test19) {
  double x = 0;
  double y = 54.67854;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test20) {
  double x = 0;
  double y = -1244.67854;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test21) {
  double x = 0;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test22) {
  double x = 0;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test23) {
  double x = 0;
  double y = -INFINITY;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test24) {
  double x = 0;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test25) {
  double x = INFINITY;
  double y = 2.0;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test26) {
  double x = INFINITY;
  double y = -3;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test27) {
  double x = INFINITY;
  double y = 123.543;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test28) {
  double x = INFINITY;
  double y = -23.575;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test29) {
  double x = INFINITY;
  double y = INFINITY;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test30) {
  double x = INFINITY;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test31) {
  double x = INFINITY;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test32) {
  double x = INFINITY;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test33) {
  double x = -INFINITY;
  double y = 2.0;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test34) {
  double x = -INFINITY;
  double y = -3;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test35) {
  double x = -INFINITY;
  double y = 123.543;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test36) {
  double x = -INFINITY;
  double y = -23.575;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test37) {
  double x = -INFINITY;
  double y = INFINITY;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test38) {
  double x = -INFINITY;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test39) {
  double x = -INFINITY;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test40) {
  double x = NAN;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test41) {
  double x = NAN;
  double y = 2.0;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test42) {
  double x = NAN;
  double y = -3;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test43) {
  double x = NAN;
  double y = 123.543;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test44) {
  double x = NAN;
  double y = -23.575;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test45) {
  double x = NAN;
  double y = INFINITY;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test46) {
  double x = NAN;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test47) {
  double x = NAN;
  double y = -INFINITY;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test48) {
  double x = NAN;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test49) {
  double x = 2.45453;
  double y = 2;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test50) {
  double x = 10000432423.4232;
  double y = -3;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test51) {
  double x = S21_PI;
  double y = S21_E;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test52) {
  double x = 1.000001;
  double y = -23.575;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test53) {
  double x = 54.912818;
  double y = INFINITY;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test54) {
  double x = 3214.42211;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test55) {
  double x = 2.03;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test56) {
  double x = 10.10;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test57) {
  double x = -2.45453;
  double y = 10;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test58) {
  double x = -10000432423.4232;
  double y = -3;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test59) {
  double x = -1.324;
  double y = 1. / 4;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test60) {
  double x = -1;
  double y = -23.575;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test61) {
  double x = -54.912818;
  double y = INFINITY;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test62) {
  double x = -3214.42211;
  double y = 0;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test63) {
  double x = -2.03;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test64) {
  double x = -10.10;
  double y = NAN;
  ck_assert_int_eq(isnan(pow(x, y)), isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test65) {
  double x = 1.324;
  double y = 1. / 4;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test66) {
  double x = 543564.65464;
  double y = 1;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test67) {
  double x = -543564.65464;
  double y = 1;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test68) {
  double x = 1;
  double y = 1;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test69) {
  double x = 1.432;
  double y = 1.432;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test70) {
  double x = -2;
  double y = -3;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test71) {
  double x = 1;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test72) {
  double x = 1;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test73) {
  double x = 1;
  double y = -1;
  ck_assert_ldouble_eq_tol(pow(x, y), s21_pow(x, y), EPSILON_6);
}
END_TEST

START_TEST(s21_pow_test74) {
  double x = 0;
  double y = -1;
  ck_assert_int_eq(isinf(pow(x, y)), isinf(s21_pow(x, y)));
}
END_TEST

START_TEST(s21_pow_test75) {
  ck_assert_double_eq_tol(s21_pow(16894.2629, -1545), pow(16894.2629, -1545),
                          EPSILON_6);
}
END_TEST

START_TEST(s21_sqrt_test1) {
  double x = 1;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), EPSILON_6);
}
END_TEST

START_TEST(s21_sqrt_test2) {
  double x = 1.4325435;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), EPSILON_6);
}
END_TEST

START_TEST(s21_sqrt_test3) {
  double x = 1423452.4325435;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), EPSILON_6);
}
END_TEST

START_TEST(s21_sqrt_test4) {
  double x = -30;
  ck_assert_int_eq(isnan(s21_sqrt(x)), 1);
}
END_TEST

START_TEST(s21_sqrt_test5) {
  double x = NAN;
  ck_assert_int_eq(isnan(sqrt(x)), isnan(s21_sqrt(x)));
}
END_TEST

START_TEST(s21_sqrt_test6) {
  double x = INFINITY;
  ck_assert_int_eq(isinf(sqrt(x)), isinf(s21_sqrt(x)));
}
END_TEST

START_TEST(s21_sqrt_test7) {
  double x = 0;
  ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), EPSILON_6);
}
END_TEST

START_TEST(s21_abs_test1) {
  int x = 1;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test2) {
  int x = -1;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test3) {
  int x = 98726216;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test4) {
  int x = -98726216;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test5) {
  int x = +0;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test6) {
  int x = -0;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test7) {
  int x = 56584118;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test8) {
  int x = -56584118;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test9) {
  int x = 54566912.0;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test10) {
  int x = -54566912.0;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test11) {
  int x = 128;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test12) {
  int x = -128;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test13) {
  int x = 777777;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test14) {
  int x = -777777;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test15) {
  int x = 657.00;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test16) {
  int x = 56558.000;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

START_TEST(s21_abs_test17) {
  int x = -56558.000;
  ck_assert_int_eq(abs(x), s21_abs(x));
}
END_TEST

// s21_fabs

START_TEST(s21_fabs_test1) {
  double x = +0;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test2) {
  double x = -0;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test3) {
  double x = 1.43633646;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test4) {
  double x = -1.43633646;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test5) {
  double x = 914868415646415.64546149842945;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test6) {
  double x = -914868415646415.64546149842945;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test7) {
  double x = 0.00000005;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test8) {
  double x = -0.00000005;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test9) {
  double x = 128.546568;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test10) {
  double x = -128.546568;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test11) {
  double x = 75.59;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test12) {
  double x = -75.59;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test13) {
  double x = S21_LN10;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test14) {
  double x = S21_E;
  ck_assert_ldouble_eq(fabs(x), s21_fabs(x));
}
END_TEST

START_TEST(s21_fabs_test15) {
  double x = NAN;
  ck_assert_int_eq(isnan(fabs(x)), isnan(s21_fabs(x)));
}
END_TEST

START_TEST(s21_fabs_test16) {
  double x = INFINITY;
  ck_assert_int_eq(isinf(fabs(x)), isinf(s21_fabs(x)));
}
END_TEST

START_TEST(s21_fabs_test17) {
  double x = -INFINITY;
  ck_assert_int_eq(isinf(fabs(x)), isinf(s21_fabs(x)));
}
END_TEST

START_TEST(test_s21_ceil_positive_fractional) {
  const double x = 5.1234567;
  long double expected = ceil(x);
  long double result = s21_ceil(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_ceil_positive_whole) {
  const double x = 5.0;
  long double expected = ceil(x);
  long double result = s21_ceil(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_ceil_negative_fractional) {
  const double x = -5.1234567;
  long double expected = ceil(x);
  long double result = s21_ceil(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_ceil_zero) {
  const double x = 0.0;
  long double expected = ceil(x);
  long double result = s21_ceil(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_ceil_infinity) {
  const double x = INFINITY;
  long double expected = ceil(x);
  long double result = s21_ceil(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_ceil_negative_infinity) {
  const double x = -INFINITY;
  long double expected = ceil(x);
  long double result = s21_ceil(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_ceil_nan) {
  const double x = NAN;
  long double result = s21_ceil(x);
  ck_assert_msg(isnan(result), "Expected NaN, but got %.16Lf", result);
}
END_TEST

START_TEST(test_s21_floor) {
  const double test_values[] = {-5.1234567, -0.1234567, 0.0, 0.1234567,
                                5.1234567};
  const int num_tests = sizeof(test_values) / sizeof(double);
  for (int i = 0; i < num_tests; ++i) {
    double x = test_values[i];
    long double expected = floor(x);
    long double result = s21_floor(x);
    ck_assert_msg(fabsl(result - expected) < EPSILON_6,
                  "Expected %.16Lf, but got %.16Lf for input %.16lf", expected,
                  result, x);
  }
}
END_TEST

START_TEST(test_s21_floor_infinity) {
  const double x = INFINITY;
  long double expected = floor(x);
  long double result = s21_floor(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_floor_negative_infinity) {
  const double x = -INFINITY;
  long double expected = floor(x);
  long double result = s21_floor(x);
  ck_assert_msg(result == expected, "Expected %.16Lf, but got %.16Lf", expected,
                result);
}
END_TEST

START_TEST(test_s21_floor_nan) {
  const double x = NAN;
  long double result = s21_floor(x);
  ck_assert_msg(isnan(result), "Expected NaN, but got %.16Lf", result);
}
END_TEST

START_TEST(s21_fmod_MAIN_test) {
  long double f_value[] = {4234, 20,      234,    -756,   435,    24.342, 345,
                           645,  2.24234, 53.534, 6456,   1,      0,      -1,
                           34,   64,      9786,   534.53, 756.56, 754};
  long double s_value[] = {8898.07,  6881.63, 1537.52, 5783.31, 2675.7,
                           5560.06,  1240.69, 9348.66, 103.02,  4153.9,
                           250,      29.3,    96.456,  86,      29.5,
                           302.0234, 1,       1947.38, 953,     42};
  for (int i = 0; i < 20; i++) {
    ck_assert_double_eq_tol(s21_fmod(f_value[i], s_value[i]),
                            fmod(f_value[i], s_value[i]), 0.000001);
  }
}

START_TEST(s21_fmod_test1) {
  ck_assert_double_nan(s21_fmod(NAN, NAN));
  ck_assert_double_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(s21_fmod_test2) {
  ck_assert_double_nan(s21_fmod(-INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test3) {
  ck_assert_double_nan(s21_fmod(-INFINITY, INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test4) {
  ck_assert_double_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_double_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test5) {
  ck_assert_double_nan(s21_fmod(NAN, INFINITY));
  ck_assert_double_nan(fmod(NAN, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test6) {
  ck_assert_double_nan(s21_fmod(-INFINITY, NAN));
  ck_assert_double_nan(fmod(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test7) {
  ck_assert_double_nan(s21_fmod(NAN, -INFINITY));
  ck_assert_double_nan(fmod(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test8) {
  ck_assert_double_nan(s21_fmod(INFINITY, NAN));
  ck_assert_double_nan(fmod(INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test9) {
  ck_assert_double_nan(s21_fmod(INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test10) {
  ck_assert_double_nan(s21_fmod(INFINITY, 3));
  ck_assert_double_nan(fmod(INFINITY, 3));
}
END_TEST

START_TEST(s21_fmod_test11) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 2));
  ck_assert_double_nan(fmod(-INFINITY, 2));
}
END_TEST

START_TEST(s21_fmod_test12) {
  ck_assert_double_nan(s21_fmod(NAN, 1));
  ck_assert_double_nan(fmod(NAN, 1));
}
END_TEST

START_TEST(s21_fmod_test13) {
  ck_assert_double_eq(s21_fmod(100, INFINITY), fmod(100, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test14) {
  ck_assert_double_eq_tol(s21_fmod(100, -INFINITY), fmod(100, -INFINITY),
                          EPSILON_6);
}
END_TEST

START_TEST(s21_fmod_test15) {
  ck_assert_double_eq(s21_fmod(0, INFINITY), fmod(0, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test16) {
  ck_assert_double_eq(s21_fmod(0, -INFINITY), fmod(0, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test17) {
  ck_assert_double_nan(s21_fmod(0, NAN));
  ck_assert_double_nan(fmod(0, NAN));
}
END_TEST

START_TEST(s21_fmod_test18) {
  ck_assert_double_eq_tol(s21_fmod(217.42, 12), fmod(217.42, 12), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test19) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 222));
  ck_assert_double_nan(fmod(-INFINITY, 222));
}
END_TEST

START_TEST(s21_fmod_test20) {
  ck_assert_double_nan(s21_fmod(NAN, 2));
  ck_assert_double_nan(fmod(NAN, 2));
}
END_TEST

START_TEST(test_s21_modf_nan) {
  const double x = NAN;
  double int_part;
  double result = s21_modf(x, &int_part);
  ck_assert_msg(s21_isnan(int_part),
                "Expected NaN, but got %.16lf for int_part", int_part);
  ck_assert_msg(s21_isnan(result), "Expected NaN, but got %.16lf for result",
                result);
}
END_TEST

START_TEST(s21_cos_test1) {
  double x = NAN;
  ck_assert_int_eq(isnan(cos(x)), isnan(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test2) {
  double x = INFINITY;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test3) {
  double x = -INFINITY;
  ck_assert_int_eq(isnan(cos(x)), isnan(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test4) {
  double x = 0.2;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test5) {
  double x = 1.8888;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test6) {
  double x = S21_PI_2;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test7) {
  double x = -S21_PI_2;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test8) {
  double x = S21_PI;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test9) {
  double x = 11.6;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test10) {
  double x = -11.6;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test11) {
  double x = 0.99999;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test12) {
  double x = -0.99999;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_cos_test13) {
  double x = 0;
  ck_assert_int_eq(isinf(cos(x)), isinf(s21_cos(x)));
}
END_TEST

START_TEST(s21_sin_test1) {
  double x = NAN;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test2) {
  double x = INFINITY;
  ck_assert_int_eq(isinf(sin(x)), isinf(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test3) {
  double x = -INFINITY;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test4) {
  double x = S21_PI / 6;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test5) {
  double x = S21_PI / 4;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test6) {
  double x = S21_PI / 3;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test7) {
  double x = S21_PI / 2;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test8) {
  double x = 0;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test9) {
  double x = 1;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test10) {
  double x = -1;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test11) {
  double x = 40.8765;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test12) {
  double x = -40.8765;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_sin_test13) {
  double x = 0.76;
  ck_assert_int_eq(isnan(sin(x)), isnan(s21_sin(x)));
}
END_TEST

START_TEST(s21_tan_test1) {
  double x = NAN;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test2) {
  double x = INFINITY;
  ck_assert_int_eq(isinf(tan(x)), isinf(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test3) {
  double x = -INFINITY;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test4) {
  double x = 0;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test5) {
  double x = S21_PI / 6;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test6) {
  double x = S21_PI / 4;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test7) {
  double x = S21_PI / 3;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test8) {
  double x = S21_PI / 2;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test9) {
  double x = 1;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(s21_tan_test10) {
  double x = 10271212.826609;
  ck_assert_int_eq(isnan(tan(x)), isnan(s21_tan(x)));
}
END_TEST

START_TEST(exp_test_0) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPSILON_6);
}
END_TEST

START_TEST(exp_test_1) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPSILON_6);
}
END_TEST

START_TEST(exp_test_2) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPSILON_6);
}
END_TEST

START_TEST(exp_test_3) {
  double x = 1.23456;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPSILON_6);
}
END_TEST

START_TEST(exp_test_4) {
  double x = 10.3456789;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPSILON_6);
}
END_TEST

START_TEST(exp_test_5) {
  double x = 1.7976931348623158e+308;
  ck_assert_ldouble_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_6) {
  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}
END_TEST

START_TEST(exp_test_7) {
  ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(exp_test_8) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(exp_test_9) {
  double x = 9999999999.99;
  ck_assert_ldouble_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_10) {
  double x = -9999999999.99;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPSILON_6);
}
END_TEST

START_TEST(exp_test_11) {
  double x = 15;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPSILON_6);
}
END_TEST

START_TEST(asin_test_0) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPSILON_6);
}
END_TEST

START_TEST(asin_test_1) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPSILON_6);
}
END_TEST

START_TEST(asin_test_2) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPSILON_6);
}
END_TEST

START_TEST(asin_test_3) {
  double x = 0.906;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPSILON_6);
}
END_TEST

START_TEST(asin_test_4) {
  double x = -0.906;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPSILON_6);
}
END_TEST

START_TEST(asin_test_5) {
  double x = 1.1;
  ck_assert_int_eq(isnan(s21_asin(x)), 1);
}
END_TEST

START_TEST(asin_test_6) {
  ck_assert_double_nan(s21_asin(NAN));
  ck_assert_double_nan(asin(NAN));
}
END_TEST

START_TEST(asin_test_7) {
  ck_assert_double_nan(s21_asin(INFINITY));
  ck_assert_double_nan(asin(INFINITY));
}
END_TEST

START_TEST(asin_test_8) {
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));
}
END_TEST

START_TEST(asin_test_9) { ck_assert_int_eq(isnan(s21_asin(-1.1)), 1); }
END_TEST

START_TEST(acos_test_0) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPSILON_6);
}
END_TEST

START_TEST(acos_test_1) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPSILON_6);
}
END_TEST

START_TEST(acos_test_2) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPSILON_6);
}
END_TEST

START_TEST(acos_test_3) {
  double x = 0.906;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPSILON_6);
}
END_TEST

START_TEST(acos_test_4) {
  double x = -0.906;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPSILON_6);
}
END_TEST

START_TEST(acos_test_5) { ck_assert_int_eq(isnan(s21_acos(1.1)), 1); }
END_TEST

START_TEST(acos_test_6) {
  ck_assert_double_nan(s21_acos(NAN));
  ck_assert_double_nan(acos(NAN));
}
END_TEST

START_TEST(acos_test_7) {
  ck_assert_double_nan(s21_acos(INFINITY));
  ck_assert_double_nan(acos(INFINITY));
}
END_TEST

START_TEST(acos_test_8) {
  ck_assert_double_nan(s21_acos(-INFINITY));
  ck_assert_double_nan(acos(-INFINITY));
}
END_TEST

START_TEST(acos_test_9) { ck_assert_int_eq(isnan(s21_acos(-1.1)), 1); }
END_TEST

START_TEST(atan_test_0) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_1) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_2) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_3) {
  double x = S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_4) {
  double x = 1.234567e-6;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_5) {
  double x = 99999999.99;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_6) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(atan_test_7) {
  double x = INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_8) {
  double x = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_9) {
  double x = 96;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_10) {
  double x = -0.34;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_11) {
  double x = 10000000;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPSILON_6);
}
END_TEST

START_TEST(atan_test_12) {
  ck_assert_double_eq_tol(s21_atan(-0.679), atan(-0.679), EPSILON_6);
}
END_TEST

int main(void) {
  Suite *s = suite_create("s21_math");

  TCase *tc_log = tcase_create("TEST LOG");
  tcase_add_test(tc_log, s21_log_test1);
  tcase_add_test(tc_log, s21_log_test2);
  tcase_add_test(tc_log, s21_log_test3);
  tcase_add_test(tc_log, s21_log_test4);
  tcase_add_test(tc_log, s21_log_test5);
  tcase_add_test(tc_log, s21_log_test6);
  tcase_add_test(tc_log, s21_log_test7);
  tcase_add_test(tc_log, s21_log_test8);
  tcase_add_test(tc_log, s21_log_test9);
  tcase_add_test(tc_log, s21_log_test10);
  tcase_add_test(tc_log, s21_log_test11);
  tcase_add_test(tc_log, s21_log_test12);
  tcase_add_test(tc_log, s21_log_test13);
  tcase_add_test(tc_log, s21_log_test14);

  suite_add_tcase(s, tc_log);

  TCase *tc_pow = tcase_create("TEST POW");
  tcase_add_test(tc_pow, s21_pow_test1);
  tcase_add_test(tc_pow, s21_pow_test2);
  tcase_add_test(tc_pow, s21_pow_test3);
  tcase_add_test(tc_pow, s21_pow_test4);
  tcase_add_test(tc_pow, s21_pow_test5);
  tcase_add_test(tc_pow, s21_pow_test6);
  tcase_add_test(tc_pow, s21_pow_test7);
  tcase_add_test(tc_pow, s21_pow_test8);
  tcase_add_test(tc_pow, s21_pow_test9);
  tcase_add_test(tc_pow, s21_pow_test10);
  tcase_add_test(tc_pow, s21_pow_test11);
  tcase_add_test(tc_pow, s21_pow_test12);
  tcase_add_test(tc_pow, s21_pow_test13);
  tcase_add_test(tc_pow, s21_pow_test14);
  tcase_add_test(tc_pow, s21_pow_test15);
  tcase_add_test(tc_pow, s21_pow_test16);
  tcase_add_test(tc_pow, s21_pow_test17);
  tcase_add_test(tc_pow, s21_pow_test18);
  tcase_add_test(tc_pow, s21_pow_test19);
  tcase_add_test(tc_pow, s21_pow_test20);
  tcase_add_test(tc_pow, s21_pow_test21);
  tcase_add_test(tc_pow, s21_pow_test22);
  tcase_add_test(tc_pow, s21_pow_test23);
  tcase_add_test(tc_pow, s21_pow_test24);
  tcase_add_test(tc_pow, s21_pow_test25);
  tcase_add_test(tc_pow, s21_pow_test26);
  tcase_add_test(tc_pow, s21_pow_test27);
  tcase_add_test(tc_pow, s21_pow_test28);
  tcase_add_test(tc_pow, s21_pow_test29);
  tcase_add_test(tc_pow, s21_pow_test30);
  tcase_add_test(tc_pow, s21_pow_test31);
  tcase_add_test(tc_pow, s21_pow_test32);
  tcase_add_test(tc_pow, s21_pow_test33);
  tcase_add_test(tc_pow, s21_pow_test34);
  tcase_add_test(tc_pow, s21_pow_test35);
  tcase_add_test(tc_pow, s21_pow_test36);
  tcase_add_test(tc_pow, s21_pow_test37);
  tcase_add_test(tc_pow, s21_pow_test38);
  tcase_add_test(tc_pow, s21_pow_test39);
  tcase_add_test(tc_pow, s21_pow_test40);
  tcase_add_test(tc_pow, s21_pow_test41);
  tcase_add_test(tc_pow, s21_pow_test42);
  tcase_add_test(tc_pow, s21_pow_test43);
  tcase_add_test(tc_pow, s21_pow_test44);
  tcase_add_test(tc_pow, s21_pow_test45);
  tcase_add_test(tc_pow, s21_pow_test46);
  tcase_add_test(tc_pow, s21_pow_test47);
  tcase_add_test(tc_pow, s21_pow_test48);
  tcase_add_test(tc_pow, s21_pow_test49);
  tcase_add_test(tc_pow, s21_pow_test50);
  tcase_add_test(tc_pow, s21_pow_test51);
  tcase_add_test(tc_pow, s21_pow_test52);
  tcase_add_test(tc_pow, s21_pow_test53);
  tcase_add_test(tc_pow, s21_pow_test54);
  tcase_add_test(tc_pow, s21_pow_test55);
  tcase_add_test(tc_pow, s21_pow_test56);
  tcase_add_test(tc_pow, s21_pow_test57);
  tcase_add_test(tc_pow, s21_pow_test58);
  tcase_add_test(tc_pow, s21_pow_test59);
  tcase_add_test(tc_pow, s21_pow_test60);
  tcase_add_test(tc_pow, s21_pow_test61);
  tcase_add_test(tc_pow, s21_pow_test62);
  tcase_add_test(tc_pow, s21_pow_test63);
  tcase_add_test(tc_pow, s21_pow_test64);
  tcase_add_test(tc_pow, s21_pow_test65);
  tcase_add_test(tc_pow, s21_pow_test66);
  tcase_add_test(tc_pow, s21_pow_test67);
  tcase_add_test(tc_pow, s21_pow_test68);
  tcase_add_test(tc_pow, s21_pow_test69);
  tcase_add_test(tc_pow, s21_pow_test70);
  tcase_add_test(tc_pow, s21_pow_test71);
  tcase_add_test(tc_pow, s21_pow_test72);
  tcase_add_test(tc_pow, s21_pow_test73);
  tcase_add_test(tc_pow, s21_pow_test74);
  tcase_add_test(tc_pow, s21_pow_test75);
  suite_add_tcase(s, tc_pow);

  TCase *tc_sqrt = tcase_create("TEST SQRT");
  tcase_add_test(tc_sqrt, s21_sqrt_test1);
  tcase_add_test(tc_sqrt, s21_sqrt_test2);
  tcase_add_test(tc_sqrt, s21_sqrt_test3);
  tcase_add_test(tc_sqrt, s21_sqrt_test4);
  tcase_add_test(tc_sqrt, s21_sqrt_test5);
  tcase_add_test(tc_sqrt, s21_sqrt_test6);
  tcase_add_test(tc_sqrt, s21_sqrt_test7);
  suite_add_tcase(s, tc_sqrt);

  TCase *tc_abs = tcase_create("TEST ABS");
  tcase_add_test(tc_abs, s21_abs_test1);
  tcase_add_test(tc_abs, s21_abs_test2);
  tcase_add_test(tc_abs, s21_abs_test3);
  tcase_add_test(tc_abs, s21_abs_test4);
  tcase_add_test(tc_abs, s21_abs_test5);
  tcase_add_test(tc_abs, s21_abs_test6);
  tcase_add_test(tc_abs, s21_abs_test7);
  tcase_add_test(tc_abs, s21_abs_test8);
  tcase_add_test(tc_abs, s21_abs_test9);
  tcase_add_test(tc_abs, s21_abs_test10);
  tcase_add_test(tc_abs, s21_abs_test11);
  tcase_add_test(tc_abs, s21_abs_test12);
  tcase_add_test(tc_abs, s21_abs_test13);
  tcase_add_test(tc_abs, s21_abs_test14);
  tcase_add_test(tc_abs, s21_abs_test15);
  tcase_add_test(tc_abs, s21_abs_test16);
  tcase_add_test(tc_abs, s21_abs_test17);
  suite_add_tcase(s, tc_abs);

  TCase *tc_fabs = tcase_create("TEST FABS");
  tcase_add_test(tc_fabs, s21_fabs_test1);
  tcase_add_test(tc_fabs, s21_fabs_test2);
  tcase_add_test(tc_fabs, s21_fabs_test3);
  tcase_add_test(tc_fabs, s21_fabs_test4);
  tcase_add_test(tc_fabs, s21_fabs_test5);
  tcase_add_test(tc_fabs, s21_fabs_test6);
  tcase_add_test(tc_fabs, s21_fabs_test7);
  tcase_add_test(tc_fabs, s21_fabs_test8);
  tcase_add_test(tc_fabs, s21_fabs_test9);
  tcase_add_test(tc_fabs, s21_fabs_test10);
  tcase_add_test(tc_fabs, s21_fabs_test11);
  tcase_add_test(tc_fabs, s21_fabs_test12);
  tcase_add_test(tc_fabs, s21_fabs_test13);
  tcase_add_test(tc_fabs, s21_fabs_test14);
  tcase_add_test(tc_fabs, s21_fabs_test15);
  tcase_add_test(tc_fabs, s21_fabs_test16);
  tcase_add_test(tc_fabs, s21_fabs_test17);
  suite_add_tcase(s, tc_fabs);

  TCase *tc_ceil = tcase_create("TEST CEIL");
  tcase_add_test(tc_ceil, test_s21_ceil_positive_fractional);
  tcase_add_test(tc_ceil, test_s21_ceil_positive_whole);
  tcase_add_test(tc_ceil, test_s21_ceil_negative_fractional);
  tcase_add_test(tc_ceil, test_s21_ceil_zero);
  tcase_add_test(tc_ceil, test_s21_ceil_infinity);
  tcase_add_test(tc_ceil, test_s21_ceil_negative_infinity);
  tcase_add_test(tc_ceil, test_s21_ceil_nan);
  suite_add_tcase(s, tc_ceil);

  TCase *tc_floor = tcase_create("TEST FLOOR");
  tcase_add_test(tc_floor, test_s21_floor);
  tcase_add_test(tc_floor, test_s21_floor_infinity);
  tcase_add_test(tc_floor, test_s21_floor_negative_infinity);
  tcase_add_test(tc_floor, test_s21_floor_nan);
  suite_add_tcase(s, tc_floor);

  TCase *tc_fmod = tcase_create("TEST FMOD");
  tcase_add_test(tc_fmod, s21_fmod_MAIN_test);
  tcase_add_test(tc_fmod, s21_fmod_test1);
  tcase_add_test(tc_fmod, s21_fmod_test2);
  tcase_add_test(tc_fmod, s21_fmod_test3);
  tcase_add_test(tc_fmod, s21_fmod_test4);
  tcase_add_test(tc_fmod, s21_fmod_test5);
  tcase_add_test(tc_fmod, s21_fmod_test6);
  tcase_add_test(tc_fmod, s21_fmod_test7);
  tcase_add_test(tc_fmod, s21_fmod_test8);
  tcase_add_test(tc_fmod, s21_fmod_test9);
  tcase_add_test(tc_fmod, s21_fmod_test10);
  tcase_add_test(tc_fmod, s21_fmod_test11);
  tcase_add_test(tc_fmod, s21_fmod_test12);
  tcase_add_test(tc_fmod, s21_fmod_test13);
  tcase_add_test(tc_fmod, s21_fmod_test14);
  tcase_add_test(tc_fmod, s21_fmod_test15);
  tcase_add_test(tc_fmod, s21_fmod_test16);
  tcase_add_test(tc_fmod, s21_fmod_test17);
  tcase_add_test(tc_fmod, s21_fmod_test18);
  tcase_add_test(tc_fmod, s21_fmod_test19);
  tcase_add_test(tc_fmod, s21_fmod_test20);
  suite_add_tcase(s, tc_fmod);

  TCase *tc_modf = tcase_create("TEST MODF");
  tcase_add_test(tc_modf, test_s21_modf_nan);
  suite_add_tcase(s, tc_modf);

  TCase *tc_cos = tcase_create("TEST COS");
  tcase_add_test(tc_cos, s21_cos_test1);
  tcase_add_test(tc_cos, s21_cos_test2);
  tcase_add_test(tc_cos, s21_cos_test3);
  tcase_add_test(tc_cos, s21_cos_test4);
  tcase_add_test(tc_cos, s21_cos_test5);
  tcase_add_test(tc_cos, s21_cos_test6);
  tcase_add_test(tc_cos, s21_cos_test7);
  tcase_add_test(tc_cos, s21_cos_test8);
  tcase_add_test(tc_cos, s21_cos_test9);
  tcase_add_test(tc_cos, s21_cos_test10);
  tcase_add_test(tc_cos, s21_cos_test11);
  tcase_add_test(tc_cos, s21_cos_test12);
  tcase_add_test(tc_cos, s21_cos_test13);
  suite_add_tcase(s, tc_cos);

  TCase *tc_sin = tcase_create("TEST SIN");
  tcase_add_test(tc_sin, s21_sin_test1);
  tcase_add_test(tc_sin, s21_sin_test2);
  tcase_add_test(tc_sin, s21_sin_test3);
  tcase_add_test(tc_sin, s21_sin_test4);
  tcase_add_test(tc_sin, s21_sin_test5);
  tcase_add_test(tc_sin, s21_sin_test6);
  tcase_add_test(tc_sin, s21_sin_test7);
  tcase_add_test(tc_sin, s21_sin_test8);
  tcase_add_test(tc_sin, s21_sin_test9);
  tcase_add_test(tc_sin, s21_sin_test10);
  tcase_add_test(tc_sin, s21_sin_test11);
  tcase_add_test(tc_sin, s21_sin_test12);
  tcase_add_test(tc_sin, s21_sin_test13);
  suite_add_tcase(s, tc_sin);

  TCase *tc_tan = tcase_create("TEST TAN");
  tcase_add_test(tc_tan, s21_tan_test1);
  tcase_add_test(tc_tan, s21_tan_test2);
  tcase_add_test(tc_tan, s21_tan_test3);
  tcase_add_test(tc_tan, s21_tan_test4);
  tcase_add_test(tc_tan, s21_tan_test5);
  tcase_add_test(tc_tan, s21_tan_test6);
  tcase_add_test(tc_tan, s21_tan_test7);
  tcase_add_test(tc_tan, s21_tan_test8);
  tcase_add_test(tc_tan, s21_tan_test9);
  tcase_add_test(tc_tan, s21_tan_test10);
  suite_add_tcase(s, tc_tan);

  TCase *tc_exp = tcase_create("TEST EXP");
  tcase_add_test(tc_exp, exp_test_0);
  tcase_add_test(tc_exp, exp_test_1);
  tcase_add_test(tc_exp, exp_test_2);
  tcase_add_test(tc_exp, exp_test_3);
  tcase_add_test(tc_exp, exp_test_4);
  tcase_add_test(tc_exp, exp_test_5);
  tcase_add_test(tc_exp, exp_test_6);
  tcase_add_test(tc_exp, exp_test_7);
  tcase_add_test(tc_exp, exp_test_8);
  tcase_add_test(tc_exp, exp_test_9);
  tcase_add_test(tc_exp, exp_test_10);
  tcase_add_test(tc_exp, exp_test_11);
  suite_add_tcase(s, tc_exp);

  TCase *tc_asin = tcase_create("TEST ASIN");
  tcase_add_test(tc_asin, asin_test_0);
  tcase_add_test(tc_asin, asin_test_1);
  tcase_add_test(tc_asin, asin_test_2);
  tcase_add_test(tc_asin, asin_test_3);
  tcase_add_test(tc_asin, asin_test_4);
  tcase_add_test(tc_asin, asin_test_5);
  tcase_add_test(tc_asin, asin_test_6);
  tcase_add_test(tc_asin, asin_test_7);
  tcase_add_test(tc_asin, asin_test_8);
  tcase_add_test(tc_asin, asin_test_9);
  suite_add_tcase(s, tc_asin);

  TCase *tc_acos = tcase_create("TEST ACOS");
  tcase_add_test(tc_acos, acos_test_0);
  tcase_add_test(tc_acos, acos_test_1);
  tcase_add_test(tc_acos, acos_test_2);
  tcase_add_test(tc_acos, acos_test_3);
  tcase_add_test(tc_acos, acos_test_4);
  tcase_add_test(tc_acos, acos_test_5);
  tcase_add_test(tc_acos, acos_test_6);
  tcase_add_test(tc_acos, acos_test_7);
  tcase_add_test(tc_acos, acos_test_8);
  tcase_add_test(tc_acos, acos_test_9);
  suite_add_tcase(s, tc_acos);

  TCase *tc_atan = tcase_create("TEST ATAN");
  tcase_add_test(tc_atan, atan_test_0);
  tcase_add_test(tc_atan, atan_test_1);
  tcase_add_test(tc_atan, atan_test_2);
  tcase_add_test(tc_atan, atan_test_3);
  tcase_add_test(tc_atan, atan_test_4);
  tcase_add_test(tc_atan, atan_test_5);
  tcase_add_test(tc_atan, atan_test_6);
  tcase_add_test(tc_atan, atan_test_7);
  tcase_add_test(tc_atan, atan_test_8);
  tcase_add_test(tc_atan, atan_test_9);
  tcase_add_test(tc_atan, atan_test_10);
  tcase_add_test(tc_atan, atan_test_11);
  tcase_add_test(tc_atan, atan_test_12);
  suite_add_tcase(s, tc_atan);

  SRunner *sr = srunner_create(s);
  srunner_run_all(sr, CK_NORMAL);

  int num_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (num_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
