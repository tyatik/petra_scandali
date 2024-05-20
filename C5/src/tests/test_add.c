#include "./test.h"

START_TEST(test_add_1) {
  int num1 = 42;
  int num2 = 30;
  int sum_int = 72;
  s21_decimal a, b;
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, sum_int);
  ck_assert_int_eq(s21_add(a, b, &res_dec), 0);
}
END_TEST

START_TEST(test_add_2) {
  int num1 = 1000;
  int num2 = 2000;
  int sum_int = 3000;
  s21_decimal a, b;
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, sum_int);
}
END_TEST

START_TEST(test_add_3) {
  int num1 = 0;
  int num2 = 0;
  int sum_int = 0;
  s21_decimal a, b;
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, sum_int);
}
END_TEST

START_TEST(test_add_4) {
  int num1 = -15;
  int num2 = 5;
  int sum_int = -10;
  s21_decimal a, b;
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, sum_int);
}
END_TEST

START_TEST(test_add_5) {
  int num1 = 11115;
  int num2 = 5;
  int sum_int = 11120;
  s21_decimal a, b;
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, sum_int);
}
END_TEST

START_TEST(test_add_6) {
  int num1 = -1;
  int num2 = -10;
  int sum_int = -11;
  s21_decimal a, b;
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, sum_int);
}
END_TEST

START_TEST(test_add_7) {
  s21_decimal src1, src2;
  int a = -1234;
  int b = 234;
  int res_origin = -1000;
  s21_from_int_to_decimal(a, &src1);
  s21_from_int_to_decimal(b, &src2);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, res_origin);
}
END_TEST

START_TEST(test_add_8) {
  s21_decimal src1, src2;
  int a = -9403;
  int b = 234;
  int res_origin = -9169;
  s21_from_int_to_decimal(a, &src1);
  s21_from_int_to_decimal(b, &src2);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, res_origin);
}
END_TEST

START_TEST(test_add_9) {
  s21_decimal src1, src2;
  int a = 9403;
  int b = 202;
  int res_origin = 9605;
  s21_from_int_to_decimal(a, &src1);
  s21_from_int_to_decimal(b, &src2);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, res_origin);
}
END_TEST

START_TEST(test_add_10) {
  s21_decimal src1, src2;
  int a = 450;
  int b = -50;
  int res_origin = 400;
  s21_from_int_to_decimal(a, &src1);
  s21_from_int_to_decimal(b, &src2);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, res_origin);
}
END_TEST

START_TEST(test_add_11) {
  s21_decimal src1, src2;
  float num1 = 7.25;
  float num2 = 9.5;
  // float res_origin = 16.75;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_12) {
  s21_decimal src1, src2;
  int num1 = -1234;
  float num2 = 1.234;
  // float res_origin = -1232.766;
  s21_from_int_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_13) {
  s21_decimal src1, src2;
  int num1 = -1234;
  float num2 = -1.234;
  // float res_origin = -1235.234;
  s21_from_int_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_14) {
  s21_decimal src1, src2;
  float num1 = -94;
  float num2 = 0.00234;
  // float res_origin = num1 + num2;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_15) {
  s21_decimal src1, src2;
  float num1 = -940.3;
  float num2 = 0.000234;
  // float res_origin = -940.299766;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_16) {
  s21_decimal src1, src2;
  float num1 = -0.9403;
  float num2 = 0.000234;
  // float res_origin = -0.940066;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_17) {
  s21_decimal src1, src2;
  float num1 = -0.9403;
  float num2 = 2.0234;
  // float res_origin = num1 + num2;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq_tol(res_float, res_origin, 1e3);
}
END_TEST

START_TEST(test_add_18) {
  s21_decimal src1, src2;
  float num1 = -0.9403;
  float num2 = -112.0234;
  // float res_origin = -112.9637;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_19) {
  s21_decimal src1, src2;
  float num1 = -0.94e03;
  float num2 = -112.0234;
  // float res_origin = -1052.0234;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_20) {
  s21_decimal src1, src2;
  float num1 = -0.94e03;
  float num2 = -112.0e2;
  // float res_origin = -12140;
  s21_from_float_to_decimal(num1, &src1);
  s21_from_float_to_decimal(num2, &src2);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_add(src1, src2, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  // ck_assert_float_eq(res_float, res_origin);
}
END_TEST

START_TEST(test_add_21) {
  s21_decimal dec1, dec2;
  int tmp1 = 100;
  int tmp2 = 99999;
  int res_s21 = 0;
  int res = 100099;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_add(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_add_22) {
  s21_decimal dec1, dec2;
  int tmp1 = -100;
  int tmp2 = -99999;
  int res_s21 = 0;
  int res = -100099;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_add(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_add_23) {
  s21_decimal dec1, dec2;
  int tmp1 = 2147483647;
  int tmp2 = -2147483647;
  int res_s21 = 0;
  int res = 0;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_add(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_add_24) {
  s21_decimal dec1, dec2;
  dec1.bits[3] = 0x300000;
  dec1.bits[2] = 0;
  dec1.bits[1] = 0xF;
  dec1.bits[0] = 0x67E4FEEF;
  dec2.bits[3] = 0x300000;
  dec2.bits[2] = 0;
  dec2.bits[1] = 0xFF;
  dec2.bits[0] = 0x67E4FFFF;
  s21_decimal res;
  res.bits[3] = 0;
  res.bits[2] = 0;
  res.bits[1] = 0x10E;
  res.bits[0] = 0xCFC9FEEE;
  s21_decimal res1;
  s21_add(dec1, dec2, &res1);
  ck_assert_int_eq(res.bits[3], res1.bits[3]);
  ck_assert_int_eq(res.bits[2], res1.bits[2]);
  ck_assert_int_eq(res.bits[1], res1.bits[1]);
  ck_assert_int_eq(res.bits[0], res1.bits[0]);
}
END_TEST

START_TEST(test_add_25) {
  s21_decimal dec1, dec2;
  int tmp1 = -2147483647;
  int tmp2 = 2147483647;
  int res_s21 = 0;
  int res = 0;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_add(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_add_26) {
  int tmp1 = 4294967295;
  s21_decimal dec1 = {{tmp1, tmp1, tmp1, 0}};
  s21_decimal dec2 = {{1, 0, 0, 0}};
  s21_decimal res1;
  int ret_s21 = s21_add(dec1, dec2, &res1);
  ck_assert_int_eq(1, ret_s21);
}
END_TEST

START_TEST(test_add_27) {
  int tmp1 = 4294967295;
  float tmp2 = pow(2, 31);
  s21_decimal dec1 = {{tmp1, tmp1, tmp1, tmp2}};
  s21_decimal dec2 = {{1, 0, 0, tmp2}};
  s21_decimal res1;
  int ret_s21 = s21_add(dec1, dec2, &res1);
  ck_assert_int_eq(2, ret_s21);
}
END_TEST

START_TEST(test_add_28) {
  float float_a = -10758.218750;
  float float_b = 6268.843750;

  float float_res = float_a + float_b;

  s21_decimal expected = {0};
  s21_from_float_to_decimal(float_res, &expected);

  s21_decimal dec_a = {0};
  s21_from_float_to_decimal(float_a, &dec_a);
  s21_decimal dec_b = {0};
  s21_from_float_to_decimal(float_b, &dec_b);

  s21_decimal result = {0};
  int code = s21_add(dec_a, dec_b, &result);

  float got_float = 0;
  s21_from_decimal_to_float(result, &got_float);

  ck_assert_int_eq(code, 0);
  // ck_assert_float_eq_tol(got_float, float_res, 1e-06);
}
END_TEST
START_TEST(test_add_29) {
  s21_decimal src1 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_decimal src2 = {0};
  float a = 0.01448;
  s21_from_float_to_decimal(a, &src2);
  s21_decimal res_dec = {0};
  s21_add(src1, src2, &res_dec);
  ck_assert_int_eq(s21_add(src1, src2, &res_dec), 1);
}
END_TEST

START_TEST(test_add_30) {
  s21_decimal src1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(INT_MAX)}};
  s21_decimal src2 = {0};
  float a = -0.01448;
  s21_from_float_to_decimal(a, &src2);
  s21_decimal res_dec = {0};
  s21_add(src1, src2, &res_dec);
  ck_assert_int_eq(s21_add(src1, src2, &res_dec), 2);
}
END_TEST

START_TEST(test_add_31) {
  s21_decimal val1 = {{15, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_32) {
  s21_decimal val1 = {{15, 0, 0, 0}};
  s21_decimal val2 = {{15, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_33) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_decimal val2 = {{1, 0, 0, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(1, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_34) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(2, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_35) {
  s21_decimal val1 = {{8, 0, 0, 0}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_36) {
  s21_decimal val1 = {{2, 0, 0, 0}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_37) {
  s21_decimal val1 = {{8, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{2, 0, 0, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_38) {
  s21_decimal val1 = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{8, 0, 0, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_39) {
  s21_decimal val1 = {0};
  s21_decimal val2 = {0};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_40) {
  s21_decimal val1 = {{4, 0, 0, 0}};
  s21_decimal val2 = {{8, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_41) {
  s21_decimal val1 = {{8, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {0};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_42) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{4, 0, 0, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_43) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(2, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_44) {
  s21_decimal val1 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_decimal val2 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_45) {
  s21_decimal val1 = {{4, 0, 0, 0}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_46) {
  s21_decimal val1 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  s21_decimal res = {0};
  ck_assert_int_eq(0, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_47) {
  s21_decimal val1 = {{4, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal val2 = {{UINT_MAX, UINT_MAX, UINT_MAX, ~(UINT_MAX / 2)}};
  s21_decimal res = {0};
  ck_assert_int_eq(2, s21_add(val1, val2, &res));
}
END_TEST

START_TEST(test_add_48) {
  s21_decimal c = {{5, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{10, 0, 0, 0}};
  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;
  int add = s21_add(c, d, p_res);
  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(add, 0);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_49) {
  s21_decimal c = {{100, 0, 0, 0}};
  s21_decimal d = {{100, 0, 0, 0}};
  s21_decimal etalon = {{100, 0, 0, 0}};
  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;
  int add = s21_add(c, d, p_res);
  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(add, 0);
  ck_assert_int_eq(equal, 0);
}
END_TEST

START_TEST(test_add_50) {
  s21_decimal c = {{2147483647, 0, 0, 0}};
  s21_decimal d = {{2147483647, 0, 0, 0}};
  s21_decimal etalon = {{4294967294, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal *p_result = &result;
  int add = s21_add(c, d, p_result);
  ck_assert_int_eq(add, 0);
  int equal = s21_is_equal(result, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_51) {
  s21_decimal c = {{1000, 0, 0, 0}};
  s21_decimal d = {{1000, 0, 0, 0}};
  s21_decimal etalon = {{2000, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal *p_result = &result;
  int add = s21_add(c, d, p_result);
  ck_assert_int_eq(add, 0);
  int equal = s21_is_equal(result, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_52) {
  s21_decimal c = {{1000, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1000, 0, 0, 0}};
  s21_decimal etalon = {{0, 0, 0, 0}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal *p_result = &result;
  int add = s21_add(c, d, p_result);
  ck_assert_int_eq(add, 0);
  int equal = s21_is_equal(result, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_53) {
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{2, 0, 0, ~(INT_MAX)}};
  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal *p_result = &result;
  int add = s21_add(c, d, p_result);
  ck_assert_int_eq(add, 0);
  int equal = s21_is_equal(*p_result, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_54) {
  s21_decimal c = {{0, 0, 0, 0}};
  s21_decimal d = {{0, 0, 0, 0}};
  s21_decimal etalon = {{0, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_55) {
  s21_decimal c = {{1, 0, 0, 0}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{2, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_56) {
  s21_decimal c = {{1000, 0, 0, 0}};
  s21_decimal d = {{1000, 0, 0, 0}};
  s21_decimal etalon = {{2000, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_57) {
  s21_decimal c = {{INT_MAX, 0, 0, 0}};
  s21_decimal d = {{INT_MAX, 0, 0, 0}};
  s21_decimal etalon = {{4294967294, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_58) {
  s21_decimal c = {{INT_MAX, 0, 0, 0}};
  s21_decimal d = {{INT_MAX, 0, 0, 0}};
  s21_decimal etalon = {{UINT32_MAX - 1, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_59) {
  s21_decimal c = {{UINT32_MAX, 0, 0, 0}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{0, 1, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[3], etalon.bits[3]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[0], etalon.bits[0]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_60) {
  s21_decimal c = {{0, UINT_MAX - 1, 0, 0}};
  s21_decimal d = {{0, 1, 0, 0}};
  s21_decimal etalon = {{0, UINT_MAX, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_61) {
  s21_decimal c = {{0, 0, UINT_MAX - 1, 0}};
  s21_decimal d = {{0, 0, 1, 0}};
  s21_decimal etalon = {{0, 0, UINT_MAX, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_62) {
  s21_decimal c = {{0, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{0, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{0, 0, 0, ~(INT_MAX)}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_63) {
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{0, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_64) {  // -1 + (-1) = -2
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{2, 0, 0, ~(INT_MAX)}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[3], etalon.bits[3]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[0], etalon.bits[0]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_65) {
  s21_decimal c = {{11, 0, 0, 65536}};
  s21_decimal d = {{0, 0, 0, 0}};
  s21_decimal etalon = {{11, 0, 0, 65536}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_66) {
  s21_decimal c = {{11, 0, 0, 65536}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{21, 0, 0, 65536}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_67) {
  s21_decimal c = {{111, 0, 0, 65536}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{121, 0, 0, 65536}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_68) {
  s21_decimal c = {{111, 0, 0, 196608}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{1111, 0, 0, 196608}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_69) {
  s21_decimal c = {0};
  c.bits[0] = 0b11111111111111111111111111111110;
  c.bits[1] = 0b00000000000000000000000000000000;
  c.bits[2] = 0b00000000000000000000000000000000;
  c.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {0};
  etalon.bits[0] = 0b11111111111111111111111111111111;
  etalon.bits[1] = 0b00000000000000000000000000000000;
  etalon.bits[2] = 0b00000000000000000000000000000000;
  etalon.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_70) {
  s21_decimal c = {{UINT32_MAX - 1, UINT32_MAX, 0, 0}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{UINT32_MAX, UINT32_MAX, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_71) {
  s21_decimal c = {{0b00000000000000000001100101111001, 0, 0, 0}};
  s21_decimal d = {{0b00000000000000010010000110001001, 0, 0, 0}};
  s21_decimal etalon = {{0b00000000000000010011101100000010, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_72) {
  s21_decimal c = {{0b10001001111001111111111111111111,
                    0b10001010110001110010001100000100, 0, 0}};
  s21_decimal d = {{0b00000000000000000000000000000001, 0, 0, 0}};
  s21_decimal etalon = {{0b10001001111010000000000000000000,
                         0b10001010110001110010001100000100, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_73) {
  s21_decimal c = {{UINT_MAX, UINT_MAX, 0, 0}};
  s21_decimal d = {{0b00000000000000000000000000000001, 0, 0, 0}};
  s21_decimal etalon = {{0, 0, 1, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_74) {
  s21_decimal c = {
      {0b10000010111000100101101011101101, 0b11111001111010000010010110101101,
       0b10110000001111101111000010010100, 0b10000000000011100000000000000000}};
  s21_decimal d = {{0b00000011010000001001011100101110, 0, 0, 0}};
  s21_decimal etalon = {
      {0b01110001001010101101101011101101, 0b00101110001111001110000111111000,
       0b10110000001111101110111101101101, 0b10000000000011100000000000000000}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_75) {
  s21_decimal src1, src2, origin;
  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;
  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  origin.bits[0] = 0b01001110111001000011100101110110;
  origin.bits[1] = 0b01001011001101011010000111011001;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;

  s21_decimal result = {{0, 0, 0, 0}};
  s21_decimal *p_res = &result;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(src1, src2, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(origin.bits[0], result.bits[0]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[3], result.bits[3]);

  int equal = s21_is_equal(result, origin);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_76) {
  s21_decimal c = {{0, 0, 0, 0}};
  s21_decimal d = {{0, 0, 0, 0}};
  s21_decimal etalon = {{0, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_77) {
  s21_decimal c = {{1, 0, 0, 0}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{2, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_78) {
  s21_decimal c = {{1000, 0, 0, 0}};
  s21_decimal d = {{1000, 0, 0, 0}};
  s21_decimal etalon = {{2000, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_79) {
  s21_decimal c = {{INT_MAX, 0, 0, 0}};
  s21_decimal d = {{INT_MAX, 0, 0, 0}};
  s21_decimal etalon = {{4294967294, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_80) {
  s21_decimal c = {{INT_MAX, 0, 0, 0}};
  s21_decimal d = {{INT_MAX, 0, 0, 0}};
  s21_decimal etalon = {{UINT32_MAX - 1, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_81) {
  s21_decimal c = {{UINT_MAX, 0, 0, 0}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{0, 1, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[3], etalon.bits[3]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[0], etalon.bits[0]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_82) {
  s21_decimal c = {{0, UINT_MAX - 1, 0, 0}};
  s21_decimal d = {{0, 1, 0, 0}};
  s21_decimal etalon = {{0, UINT_MAX, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_83) {
  s21_decimal c = {{0, 0, UINT_MAX - 1, 0}};
  s21_decimal d = {{0, 0, 1, 0}};
  s21_decimal etalon = {{0, 0, UINT_MAX, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_84) {
  s21_decimal c = {{0, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{0, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{0, 0, 0, ~(INT_MAX)}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_85) {
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{0, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_86) {  // -1 + (-1) = -2
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{2, 0, 0, ~(INT_MAX)}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_87) {
  s21_decimal c = {{11, 0, 0, 65536}};
  s21_decimal d = {{0, 0, 0, 0}};
  s21_decimal etalon = {{11, 0, 0, 65536}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_88) {
  s21_decimal c = {{11, 0, 0, 65536}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{21, 0, 0, 65536}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_89) {
  s21_decimal c = {{111, 0, 0, 65536}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{121, 0, 0, 65536}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_90) {
  s21_decimal c = {{111, 0, 0, 196608}};
  s21_decimal d = {{1, 0, 0, 0}};
  s21_decimal etalon = {{1111, 0, 0, 196608}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);
  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_91) {
  s21_decimal c = {{0b00000000000000000001100101111001, 0, 0, 0}};
  s21_decimal d = {{0b00000000000000010010000110001001, 0, 0, 0}};
  s21_decimal etalon = {{0b00000000000000010011101100000010, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_92) {
  s21_decimal c = {{0b10001001111001111111111111111111,
                    0b10001010110001110010001100000100, 0, 0}};
  s21_decimal d = {{0b00000000000000000000000000000001, 0, 0, 0}};
  s21_decimal etalon = {{0b10001001111010000000000000000000,
                         0b10001010110001110010001100000100, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_93) {
  s21_decimal c = {{UINT_MAX, UINT_MAX, 0, 0}};
  s21_decimal d = {{0b00000000000000000000000000000001, 0, 0, 0}};
  s21_decimal etalon = {{0, 0, 1, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_94) {
  s21_decimal c = {
      {0b10000010111000100101101011101101, 0b11111001111010000010010110101101,
       0b10110000001111101111000010010100, 0b10000000000011100000000000000000}};
  s21_decimal d = {{0b00000011010000001001011100101110, 0, 0, 0}};
  s21_decimal etalon = {
      {0b01110001001010101101101011101101, 0b00101110001111001110000111111000,
       0b10110000001111101110111101101101, 0b10000000000011100000000000000000}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_add(c, d, p_res);
  ck_assert_int_eq(add, 0);

  ck_assert_int_eq(res.bits[0], etalon.bits[0]);
  ck_assert_int_eq(res.bits[1], etalon.bits[1]);
  ck_assert_int_eq(res.bits[2], etalon.bits[2]);
  ck_assert_int_eq(res.bits[3], etalon.bits[3]);

  // 0 - OK 1 - число слишком велико или равно бесконечности 2 - число слишком
  // мало или равно отрицательной бесконечности 3 - деление на 0
  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_add_95) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000110000000000000000;
  s21_decimal s21_res = {0};
  ck_assert_int_eq(s21_add(src1, src2, &s21_res), 1);
}
END_TEST

START_TEST(test_add_96) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000101;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal s21_res = {0};
  ck_assert_int_eq(s21_add(src1, src2, &s21_res), 1);
}
END_TEST

START_TEST(test_add_97) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal s21_res = {0};
  ck_assert_int_eq(s21_add(src1, src2, &s21_res), 1);
}
END_TEST

START_TEST(test_add_98) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal original_res = {0};
  original_res.bits[0] = 0b11111111111111111111111111111110;
  original_res.bits[1] = 0b11111111111111111111111111111111;
  original_res.bits[2] = 0b11111111111111111111111111111111;
  original_res.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal s21_res = {0};
  s21_add(src1, src2, &s21_res);
  ck_assert_int_eq(s21_add(src1, src2, &s21_res), 0);
  ck_assert_int_eq(original_res.bits[0], s21_res.bits[0]);
  ck_assert_int_eq(original_res.bits[1], s21_res.bits[1]);
  ck_assert_int_eq(original_res.bits[2], s21_res.bits[2]);
  ck_assert_int_eq(original_res.bits[3], s21_res.bits[3]);
}
END_TEST

START_TEST(test_add_99) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b00000000000000000000001111111111;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000001111111111;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal original_res = {0};
  original_res.bits[0] = 0b00000000000000000010101111110101;
  original_res.bits[1] = 0b00000000000000000000000000000000;
  original_res.bits[2] = 0b00000000000000000000000000000000;
  original_res.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal s21_res = {0};
  s21_add(src1, src2, &s21_res);
  ck_assert_int_eq(s21_add(src1, src2, &s21_res), 0);
  ck_assert_int_eq(original_res.bits[0], s21_res.bits[0]);
  ck_assert_int_eq(original_res.bits[1], s21_res.bits[1]);
  ck_assert_int_eq(original_res.bits[2], s21_res.bits[2]);
  ck_assert_int_eq(original_res.bits[3], s21_res.bits[3]);
}
END_TEST

Suite *test_add(void) {
  Suite *s = suite_create("\n\033[37;1m==========| S21_ADD |=========\033[0m");
  TCase *tc = tcase_create("tc_add");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_add_1);
  tcase_add_test(tc, test_add_2);
  tcase_add_test(tc, test_add_3);
  tcase_add_test(tc, test_add_4);
  tcase_add_test(tc, test_add_5);
  tcase_add_test(tc, test_add_6);
  tcase_add_test(tc, test_add_7);
  tcase_add_test(tc, test_add_8);
  tcase_add_test(tc, test_add_9);
  tcase_add_test(tc, test_add_10);
  tcase_add_test(tc, test_add_11);
  tcase_add_test(tc, test_add_12);
  tcase_add_test(tc, test_add_13);
  tcase_add_test(tc, test_add_14);
  tcase_add_test(tc, test_add_15);
  tcase_add_test(tc, test_add_16);
  tcase_add_test(tc, test_add_17);
  tcase_add_test(tc, test_add_18);
  tcase_add_test(tc, test_add_19);
  tcase_add_test(tc, test_add_20);
  tcase_add_test(tc, test_add_21);
  tcase_add_test(tc, test_add_22);
  tcase_add_test(tc, test_add_23);
  tcase_add_test(tc, test_add_24);
  tcase_add_test(tc, test_add_25);
  tcase_add_test(tc, test_add_26);
  tcase_add_test(tc, test_add_27);
  tcase_add_test(tc, test_add_28);
  tcase_add_test(tc, test_add_29);
  tcase_add_test(tc, test_add_30);
  tcase_add_test(tc, test_add_31);
  tcase_add_test(tc, test_add_32);
  tcase_add_test(tc, test_add_33);
  tcase_add_test(tc, test_add_34);
  tcase_add_test(tc, test_add_35);
  tcase_add_test(tc, test_add_36);
  tcase_add_test(tc, test_add_37);
  tcase_add_test(tc, test_add_38);
  tcase_add_test(tc, test_add_39);
  tcase_add_test(tc, test_add_40);
  tcase_add_test(tc, test_add_41);
  tcase_add_test(tc, test_add_42);
  tcase_add_test(tc, test_add_43);
  tcase_add_test(tc, test_add_44);
  tcase_add_test(tc, test_add_45);
  tcase_add_test(tc, test_add_46);
  tcase_add_test(tc, test_add_47);
  tcase_add_test(tc, test_add_48);
  tcase_add_test(tc, test_add_49);
  tcase_add_test(tc, test_add_50);
  tcase_add_test(tc, test_add_51);
  tcase_add_test(tc, test_add_52);
  tcase_add_test(tc, test_add_53);
  tcase_add_test(tc, test_add_54);
  tcase_add_test(tc, test_add_55);
  tcase_add_test(tc, test_add_56);
  tcase_add_test(tc, test_add_57);
  tcase_add_test(tc, test_add_58);
  tcase_add_test(tc, test_add_59);
  tcase_add_test(tc, test_add_60);
  tcase_add_test(tc, test_add_61);
  tcase_add_test(tc, test_add_62);
  tcase_add_test(tc, test_add_63);
  tcase_add_test(tc, test_add_64);
  tcase_add_test(tc, test_add_65);
  tcase_add_test(tc, test_add_66);
  tcase_add_test(tc, test_add_67);
  tcase_add_test(tc, test_add_68);
  tcase_add_test(tc, test_add_69);
  tcase_add_test(tc, test_add_70);
  tcase_add_test(tc, test_add_71);
  tcase_add_test(tc, test_add_72);
  tcase_add_test(tc, test_add_73);
  tcase_add_test(tc, test_add_74);
  tcase_add_test(tc, test_add_75);
  tcase_add_test(tc, test_add_76);
  tcase_add_test(tc, test_add_77);
  tcase_add_test(tc, test_add_78);
  tcase_add_test(tc, test_add_79);
  tcase_add_test(tc, test_add_80);
  tcase_add_test(tc, test_add_81);
  tcase_add_test(tc, test_add_82);
  tcase_add_test(tc, test_add_83);
  tcase_add_test(tc, test_add_84);
  tcase_add_test(tc, test_add_85);
  tcase_add_test(tc, test_add_86);
  tcase_add_test(tc, test_add_87);
  tcase_add_test(tc, test_add_88);
  tcase_add_test(tc, test_add_89);
  tcase_add_test(tc, test_add_90);
  tcase_add_test(tc, test_add_91);
  tcase_add_test(tc, test_add_92);
  tcase_add_test(tc, test_add_93);
  tcase_add_test(tc, test_add_94);
  tcase_add_test(tc, test_add_95);
  tcase_add_test(tc, test_add_96);
  tcase_add_test(tc, test_add_97);
  tcase_add_test(tc, test_add_98);
  tcase_add_test(tc, test_add_99);

  return s;
}