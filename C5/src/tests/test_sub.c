#include "./test.h"

START_TEST(test_sub_1) {
  int num1 = -10;
  int num2 = -10;
  int dif_int = 0;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_2) {
  int num1 = 10;
  int num2 = 20;
  int dif_int = -10;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_3) {
  int num1 = -10;
  int num2 = 20;
  int dif_int = -30;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_4) {
  int num1 = 9403;
  int num2 = 202;
  int dif_int = 9201;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_5) {
  int num1 = 100;
  int num2 = -200;
  int dif_int = 300;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_6) {
  int num1 = 100;
  int num2 = -10;
  int dif_int = 110;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_7) {
  int num1 = -900;
  int num2 = -100;
  int dif_int = -800;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_8) {
  int num1 = 900;
  int num2 = 100;
  int dif_int = 800;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_9) {
  int num1 = 900;
  int num2 = -100;
  int dif_int = 1000;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_10) {
  int num1 = -900;
  int num2 = 100;
  int dif_int = -1000;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  int res_int = 0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_int(res_dec, &res_int);
  ck_assert_int_eq(res_int, dif_int);
}
END_TEST

START_TEST(test_sub_11) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  int num1 = 123;
  float num2 = 12.5;
  float origin_float = 110.5;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", origin_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, origin_float);
}
END_TEST

START_TEST(test_sub_12) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  int num1 = -123;
  float num2 = 12.5;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

// START_TEST(test_sub_13) {
//   char str1[100] = {'\0'};
//   char str2[100] = {'\0'};
//   float num1 = 12.9;
//   float num2 = 12.5;
//   float original_res = num1 - num2;
//   s21_decimal a = {0};
//   s21_decimal b = {0};
//   s21_from_float_to_decimal(num1, &a);
//   s21_from_float_to_decimal(num2, &b);
//   s21_decimal res_dec = {0};
//   float our_res = 0.0;
//   s21_sub(a, b, &res_dec);
//   s21_from_decimal_to_float(res_dec, &our_res);
//   snprintf(str1, sizeof(str1), "%.28lf", original_res);
//   snprintf(str2, sizeof(str1), "%.28lf", our_res);
//   ck_assert_str_eq(str1, str2);
//   // ck_assert_float_eq_tol(our_res, original_res, 1e1);
// }
// END_TEST

START_TEST(test_sub_14) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  int num1 = 9403;
  float num2 = 202.098;
  float dif_float = 9200.902;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_15) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  int num1 = -9403;
  float num2 = 202.098;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_int_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_16) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  float num1 = 9403.0;
  float num2 = 202.09e8;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_17) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  float num1 = 9403.0e2;
  float num2 = 202.09e8;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_float_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_18) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  float num1 = -9403.0e2;
  int num2 = -202;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_19) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  float num1 = -94;
  float num2 = -202;
  float dif_float = num1 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_20) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  float num1 = -1.0 / 0.0;
  int num2 = 202;
  double dif_float = 0 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_21) {
  char str1[100] = {'\0'};
  char str2[100] = {'\0'};
  float num1 = 1.0 / 0.0;
  int num2 = 20;
  double dif_float = 0 - num2;
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_from_float_to_decimal(num1, &a);
  s21_from_int_to_decimal(num2, &b);
  s21_decimal res_dec = {0};
  float res_float = 0.0;
  s21_sub(a, b, &res_dec);
  s21_from_decimal_to_float(res_dec, &res_float);
  snprintf(str1, sizeof(str1), "%.28lf", dif_float);
  snprintf(str2, sizeof(str1), "%.28lf", res_float);
  ck_assert_str_eq(str1, str2);
  // ck_assert_float_eq(res_float, dif_float);
}
END_TEST

START_TEST(test_sub_22) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = 100;
  int tmp2 = 99999;
  int res_s21 = 0;
  int res = -99899;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_sub_23) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -100;
  int tmp2 = -99999;
  int res_s21 = 0;
  int res = 99899;
  s21_decimal res1;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_sub_24) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -2147483647;
  int tmp2 = -2147483647;
  int res_s21 = 0;
  int res = 0;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1;
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_sub_25) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = -214748347;
  int tmp2 = 217483647;
  int res_s21 = 0;
  int res = -214748347 - 217483647;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1;
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_sub_26) {
  s21_decimal dec1;
  s21_decimal dec2;
  int tmp1 = 214748347;
  int tmp2 = -217483647;
  int res_s21 = 0;
  int res = 214748347 - -217483647;
  s21_from_int_to_decimal(tmp1, &dec1);
  s21_from_int_to_decimal(tmp2, &dec2);
  s21_decimal res1;
  s21_sub(dec1, dec2, &res1);
  s21_from_decimal_to_int(res1, &res_s21);
  ck_assert_int_eq(res_s21, res);
}
END_TEST

START_TEST(test_sub_27) {
  float tmp = pow(2, 31);
  s21_decimal dec1 = {{4294967295, 4294967295, 4294967295, 0}};
  s21_decimal dec2 = {{1, 0, 0, tmp}};
  s21_decimal res1;
  int ret_s21 = s21_sub(dec1, dec2, &res1);
  ck_assert_int_eq(1, ret_s21);
}
END_TEST

START_TEST(test_sub_28) {
  float tmp = pow(2, 31);
  s21_decimal dec1 = {{4294967295, 4294967295, 4294967295, tmp}};
  s21_decimal dec2 = {{1, 0, 0, 0}};
  s21_decimal res1;
  int ret_s21 = s21_sub(dec1, dec2, &res1);
  ck_assert_int_eq(2, ret_s21);
}
END_TEST

START_TEST(test_sub_29) {
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
  s21_decimal original_res = {0};
  original_res.bits[0] = 0b11111111111111111111111111111110;
  original_res.bits[1] = 0b11111111111111111111111111111111;
  original_res.bits[2] = 0b11111111111111111111111111111111;
  original_res.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal s21_res = {0};
  s21_sub(src1, src2, &s21_res);
  ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 0);
  ck_assert_int_eq(original_res.bits[0], s21_res.bits[0]);
  ck_assert_int_eq(original_res.bits[1], s21_res.bits[1]);
  ck_assert_int_eq(original_res.bits[2], s21_res.bits[2]);
  ck_assert_int_eq(original_res.bits[3], s21_res.bits[3]);
}
END_TEST

START_TEST(test_sub_30) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000110000000000000000;
  s21_decimal s21_res = {0};
  ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 2);
}
END_TEST

START_TEST(test_sub_31) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal src2 = {0};
  src2.bits[0] = 0b00000000000000000000000000000101;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal s21_res = {0};
  ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 2);
}
END_TEST

START_TEST(test_sub_32) {
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
  s21_decimal s21_res = {0};
  ck_assert_int_eq(s21_sub(src1, src2, &s21_res), 2);
}
END_TEST

START_TEST(test_sub_33) {
  s21_decimal src1, src2, origin;
  // src1 = 2;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_34) {
  s21_decimal src1, src2, origin;
  // src1 = 3;
  // src2 = 2;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_35) {
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_36) {
  s21_decimal src1, src2, origin;
  // src1 = 2;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_37) {
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_38) {
  s21_decimal src1, src2, origin;
  // src1 = 2;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_39) {
  s21_decimal src1, src2, origin;
  // src1 = 6521;
  // src2 = 74121;

  src1.bits[0] = 0b00000000000000000001100101111001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000010010000110001001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000010000100000010000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_40) {
  s21_decimal src1, src2, origin;
  // src1 = 4;
  // src2 = 97623323;

  src1.bits[0] = 0b00000000000000000000000000000100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000101110100011001110100011011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000101110100011001110100010111;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_41) {
  s21_decimal src1, src2, origin;
  // src1 = 65658654;
  // src2 = 5;

  src1.bits[0] = 100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 95;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 5;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_42) {
  s21_decimal src1, src2, origin;
  // src1 = -364748;
  // src2 = 1;

  src1.bits[0] = 0b00000000000001011001000011001100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000001011001000011001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_43) {
  s21_decimal src1, src2, origin;
  // src1 = 1;
  // src2 = 98745654321;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b11111101101100110001110000110001;
  src2.bits[1] = 0b00000000000000000000000000010110;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11111101101100110001110000110000;
  origin.bits[1] = 0b00000000000000000000000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_44) {
  s21_decimal src1, src2, origin;
  // src1 = -9878798789;
  // src2 = -3;

  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b01001100110100101000000111000010;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_45) {
  s21_decimal src1, src2, origin;
  // src1 = 9999999999999999999;
  // src2 = 1;

  src1.bits[0] = 0b10001001111001111111111111111111;
  src1.bits[1] = 0b10001010110001110010001100000100;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10001001111001111111111111111110;
  origin.bits[1] = 0b10001010110001110010001100000100;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_46) {
  s21_decimal src1, src2, origin;
  // src1 = 18446744073709551615;
  // src2 = 1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11111111111111111111111111111110;
  origin.bits[1] = 0b11111111111111111111111111111111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_47) {
  s21_decimal src1, src2, origin;
  // src1 = 18446744073709551615.0;
  // src2 = 965453154;

  src1.bits[0] = 0b11111111111111111111111111110110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b00000000000000000000000000001001;
  src1.bits[3] = 0b00000000000000010000000000000000;

  src2.bits[0] = 0b00111001100010111010010101100010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11000000100010111000101000100010;
  origin.bits[1] = 0b11111111111111111111111111111101;
  origin.bits[2] = 0b00000000000000000000000000001001;
  origin.bits[3] = 0b00000000000000010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_48) {
  s21_decimal src1, src2, origin;
  // src1 = -545454512454545.35265454545645;
  // src2 = 54564654;

  src1.bits[0] = 0b10000010111000100101101011101101;
  src1.bits[1] = 0b11111001111010000010010110101101;
  src1.bits[2] = 0b10110000001111101111000010010100;
  src1.bits[3] = 0b10000000000011100000000000000000;

  src2.bits[0] = 0b00000011010000001001011100101110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10010100100110011101101011101101;
  origin.bits[1] = 0b11000101100100110110100101100010;
  origin.bits[2] = 0b10110000001111101111000110111100;
  origin.bits[3] = 0b10000000000011100000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_49) {
  s21_decimal src1, src2, origin;
  // src1 = 7961327845421.879754123131254;
  // src2 = 0;

  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b01001110111001000011100101110110;
  origin.bits[1] = 0b01001011001101011010000111011001;
  origin.bits[2] = 0b00011001101110010111010010111111;
  origin.bits[3] = 0b00000000000011110000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_50) {
  s21_decimal src1, src2, origin;
  // src1 = 12345677.987654345678987654346;
  // src2 = 87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b00000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10010010000001100111100010100101;
  origin.bits[1] = 0b10001011011010100100100011011111;
  origin.bits[2] = 0b00011100010100011001001100010001;
  origin.bits[3] = 0b10000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_51) {
  s21_decimal src1, src2, origin;
  // src1 = -12345677.987654345678987654346;
  // src2 = 87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b10000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b00000000000100000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11010010000011011110010110111111;
  origin.bits[1] = 0b10100111010011100111001000100001;
  origin.bits[2] = 0b00011100010100111001110111101101;
  origin.bits[3] = 0b10000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_52) {
  s21_decimal src1, src2, origin;
  // src1 = 12345677.987654345678987654346;
  // src2 = -87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b00000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11010010000011011110010110111111;
  origin.bits[1] = 0b10100111010011100111001000100001;
  origin.bits[2] = 0b00011100010100111001110111101101;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_53) {
  s21_decimal src1, src2, origin;
  // src1 = -12345677.987654345678987654346;
  // src2 = -87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b10000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b10000000000100000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10010010000001100111100010100101;
  origin.bits[1] = 0b10001011011010100100100011011111;
  origin.bits[2] = 0b00011100010100011001001100010001;
  origin.bits[3] = 0b00000000000100010000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_54) {
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_55) {
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_56) {
  s21_decimal src1, src2, origin;
  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_57) {
  s21_decimal src1, src2, origin;
  // src1 = 792281625142643375935439503;
  // src2 = -1;

  src1.bits[0] = 0b00101000111101011100001010001111;
  src1.bits[1] = 0b11110101110000101000111101011100;
  src1.bits[2] = 0b00000010100011110101110000101000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00101000111101011100001010010000;
  origin.bits[1] = 0b11110101110000101000111101011100;
  origin.bits[2] = 0b00000010100011110101110000101000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_58) {
  s21_decimal src1, src2, origin;
  // src1 = 7922816251427554395;
  // src2 = 65645646;

  src1.bits[0] = 0b01011111000010000000010001011011;
  src1.bits[1] = 0b01101101111100110111111101100111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000011111010011010110001001110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b01011011000111100101100000001101;
  origin.bits[1] = 0b01101101111100110111111101100111;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_59) {
  s21_decimal src1, src2, origin;
  // src1 = 665464545;
  // src2 = 8798232189789785;

  src1.bits[0] = 0b00100111101010100010111011100001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00010000010100101110011001011001;
  src2.bits[1] = 0b00000000000111110100000111110010;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11101000101010001011011101111000;
  origin.bits[1] = 0b00000000000111110100000111110001;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_60) {
  s21_decimal src1, src2, origin;
  // src1 = 2.7986531268974139743;
  // src2 = 9.979623121254565121244554;

  src1.bits[0] = 0b11111110100100001101100101011111;
  src1.bits[1] = 0b10000100011001000010000111101000;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;

  src2.bits[0] = 0b11010100101011100011110110001010;
  src2.bits[1] = 0b01110100000101000010011110100011;
  src2.bits[2] = 0b00000000000010000100000101000100;
  src2.bits[3] = 0b00000000000110000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b00001110111111111010100000101010;
  origin.bits[1] = 0b00101001110101100000001000110100;
  origin.bits[2] = 0b00000000000001011111000010100001;
  origin.bits[3] = 0b10000000000110000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_61) {
  s21_decimal src1, src2, origin;
  // src1 = -9798956154578676.797564534156;
  // src2 = -2156878451.854764;

  src1.bits[0] = 0b01010100010000000011110110001100;
  src1.bits[1] = 0b10001011010100100000010101011001;
  src1.bits[2] = 0b00011111101010011000000110101101;
  src1.bits[3] = 0b10000000000011000000000000000000;

  src2.bits[0] = 0b01100101111100100100110110101100;
  src2.bits[1] = 0b00000000000001111010100110101011;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000001100000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b11010010100100100111101010001100;
  origin.bits[1] = 0b10011110100111100111000100000100;
  origin.bits[2] = 0b00011111101010011000000100111000;
  origin.bits[3] = 0b10000000000011000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_62) {
  s21_decimal src1, src2, origin;
  // src1 = 0.5456465465486476846545465485;
  // src2 = 0.68985125146545154;

  src1.bits[0] = 0b00001011000011110111000010001101;
  src1.bits[1] = 0b10010110101100000101100101010001;
  src1.bits[2] = 0b00010001101000010111101110000001;
  src1.bits[3] = 0b00000000000111000000000000000000;

  src2.bits[0] = 0b00010111001001010100110000000010;
  src2.bits[1] = 0b00000000111101010001010110011011;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000100010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b01011010101111100101111101110011;
  origin.bits[1] = 0b00101101001111010011000001101000;
  origin.bits[2] = 0b00000100101010001101010101010111;
  origin.bits[3] = 0b10000000000111000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_63) {
  s21_decimal src1, src2, origin;
  // src1 = -0.77545545454546589781;
  // src2 = 87894515154546456456;

  src1.bits[0] = 0b10101100001010000001100001010101;
  src1.bits[1] = 0b00110100001010010001111010111100;
  src1.bits[2] = 0b00000000000000000000000000000100;
  src1.bits[3] = 0b10000000000101000000000000000000;

  src2.bits[0] = 0b00010011111011011111011110001000;
  src2.bits[1] = 0b11000011110010000000101111011001;
  src2.bits[2] = 0b00000000000000000000000000000100;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10111000010101011100100001001001;
  origin.bits[1] = 0b01100110100011011000001100010111;
  origin.bits[2] = 0b00011100011001100111011011000001;
  origin.bits[3] = 0b10000000000010000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_64) {
  s21_decimal src1, src2, origin;
  // src1 = -7922816251426433759354395033;
  // src2 = 1;

  src1.bits[0] = 0b10011001100110011001100110011001;
  src1.bits[1] = 0b10011001100110011001100110011001;
  src1.bits[2] = 0b00011001100110011001100110011001;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_sub(src1, src2, &result);

  origin.bits[0] = 0b10011001100110011001100110011010;
  origin.bits[1] = 0b10011001100110011001100110011001;
  origin.bits[2] = 0b00011001100110011001100110011001;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(test_sub_65) {  // 10 -5 =5
  s21_decimal c = {{10, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{5, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_sub_66) {  // 100 -5 !=5
  s21_decimal c = {{100, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{5, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 0);  // *
}
END_TEST

START_TEST(test_sub_67) {  // INT_MAX -5 = 2147483642
  s21_decimal c = {{INT_MAX, 0, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{2147483642, 0, 0, 0}};
  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;
  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_sub_68) {
  s21_decimal c = {{INT_MAX, INT_MAX, 0, 0}};
  s21_decimal d = {{5, 0, 0, 0}};
  s21_decimal etalon = {{INT_MAX - 5, INT_MAX, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_sub_69) {  // 1-(-1)=2
  s21_decimal c = {{1, 0, 0, 0}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{2, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_sub_70) {  // -1-(-1)=0
  s21_decimal c = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{1, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{0, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_sub_71) {  // 1-(-1)=2
  s21_decimal c = {{100, 0, 0, 0}};
  s21_decimal d = {{100, 0, 0, ~(INT_MAX)}};
  s21_decimal etalon = {{200, 0, 0, 0}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);

  int equal = s21_is_equal(res, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(test_sub_72) {  // -1-(-1)=0
  s21_decimal c = {{100, 0, 0, ~(INT_MAX)}};
  s21_decimal d = {{100, 0, 0, ~(INT_MAX)}};

  s21_decimal res = {{0, 0, 0, 0}};
  s21_decimal *p_res = &res;

  int add = s21_sub(c, d, p_res);
  ck_assert_int_eq(add, 0);
}
END_TEST

// add90

START_TEST(test_sub_73) {
  s21_decimal value_1 = {{0, 0, 0, 0x80000000}};
  s21_decimal value_2 = {{0, 0, 0, 0}};
  s21_decimal result = {0};
  int return_value = s21_sub(value_1, value_2, &result), x = 0;
  s21_from_decimal_to_int(result, &x);
  ck_assert_int_eq(x, 0);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(test_sub_74) {
  s21_decimal value_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal value_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal result = {0};
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(
      result.bits[0] + result.bits[1] + result.bits[2] + result.bits[3], 0);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(test_sub_75) {
  s21_decimal value_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  s21_decimal value_1 = {{1, 1, 1, 0}};
  s21_decimal result = {0};
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(return_value, 0);
  for (int i = 0; i < 3; i++) ck_assert_int_eq(result.bits[i], 0xFFFFFFFF - 1);
}
END_TEST

START_TEST(test_sub_76) {
  s21_decimal value_1 = {{10, 0, 0, 0}};
  s21_decimal value_2 = {{2147483638, 0, 0, 0}};
  s21_decimal result = {{2147483628, 0, 0, 0}};
  set_sign(&result, 1);
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(return_value, 0);
  ck_assert_int_eq(result.bits[0], 2147483628);
  ck_assert_int_eq(result.bits[1], 0);
  ck_assert_int_eq(result.bits[2], 0);
  ck_assert_int_eq(result.bits[3], 0x80000000);
}
END_TEST

START_TEST(test_sub_77) {
  s21_decimal value_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal value_2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal result = {0};
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(result.bits[0] + result.bits[1] + result.bits[2], 0);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(test_sub_78) {
  s21_decimal value_1 = {0};
  s21_decimal value_2 = {{12345678, 0, 0, 0}};
  s21_decimal result = {0};
  set_exp(&value_2, 7);
  int x = 2;
  float result_float = 0, z = x - 1.2345678;
  s21_from_int_to_decimal(x, &value_1);
  int return_value = s21_sub(value_1, value_2, &result);
  s21_from_decimal_to_float(result, &result_float);
  ck_assert_int_eq(return_value, 0);
  ck_assert_int_eq(fabs((result_float - z)) < 0, 0);
}
END_TEST

START_TEST(test_sub_79) {
  s21_decimal value_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  s21_decimal value_2 = {{1, 1, 1, 0}};
  s21_decimal result = {0};
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(return_value, 2);
}
END_TEST

START_TEST(test_sub_80) {
  s21_decimal value_1 = {{13, 0, 0, 0}};
  set_exp(&value_1, 1);
  set_sign(&value_1, 1);
  s21_decimal value_2 = {{286, 0, 0, 0}};
  set_exp(&value_2, 2);
  set_sign(&value_2, 1);
  s21_decimal result;
  s21_decimal check = {{156, 0, 0, 0}};
  set_exp(&check, 2);
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(test_sub_81) {
  s21_decimal value_1 = {{13, 0, 0, 0}};
  set_exp(&value_1, 1);
  set_sign(&value_1, 1);
  s21_decimal value_2 = {{286, 0, 0, 0}};
  set_exp(&value_2, 2);
  s21_decimal result;
  s21_decimal check = {{416, 0, 0, 0}};
  set_exp(&check, 2);
  set_sign(&check, 1);
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(test_sub_82) {
  s21_decimal value_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  set_sign(&value_1, 1);
  s21_decimal value_2 = {{2, 0, 0, 0}};
  s21_decimal result;
  s21_decimal check = {{0, 0, 0, 0}};

  int return_value = s21_sub(value_1, value_2, &result);
  // printf("test_sub_82 %d\n", return_value);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 2);
  // printf("test_sub_82 %d\n", return_value);
}
END_TEST

START_TEST(test_sub_83) {
  s21_decimal value_1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
  set_sign(&value_1, 1);
  s21_decimal value_2 = {{2, 0, 0, 0}};
  s21_decimal result;
  s21_decimal check = {{0, 0, 0, 0}};
  int return_value = s21_sub(value_1, value_2, &result);
  // printf("test_sub_83 %d\n", return_value);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 2);
}
END_TEST

START_TEST(test_sub_84) {
  s21_decimal value_1 = {{64071, 0, 0, 0}};
  set_exp(&value_1, 4);
  s21_decimal value_2 = {{5919, 0, 0, 0}};
  set_exp(&value_2, 1);
  s21_decimal result;
  s21_decimal check = {{5854929, 0, 0, 0}};
  set_exp(&check, 4);
  set_sign(&check, 1);
  int return_value = s21_sub(value_1, value_2, &result);
  ck_assert_int_eq(result.bits[0], check.bits[0]);
  ck_assert_int_eq(result.bits[1], check.bits[1]);
  ck_assert_int_eq(result.bits[2], check.bits[2]);
  ck_assert_int_eq(result.bits[3], check.bits[3]);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(test_sub_85) {
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_decimal res = {0};
  s21_from_int_to_decimal(100, &a);
  s21_from_int_to_decimal(50, &b);
  int err = s21_sub(a, b, &res);
  int int_res = 0;
  s21_from_decimal_to_int(res, &int_res);
  ck_assert_int_eq(int_res, 50);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_sub_86) {
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_decimal res = {0};
  s21_from_int_to_decimal(-100, &a);
  s21_from_int_to_decimal(50, &b);
  int err = s21_sub(a, b, &res);
  int int_res = 0;
  s21_from_decimal_to_int(res, &int_res);
  ck_assert_int_eq(int_res, -150);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_sub_87) {
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_decimal res = {0};
  s21_from_int_to_decimal(-100, &a);
  s21_from_int_to_decimal(-50, &b);
  int err = s21_sub(a, b, &res);
  int int_res = 0;
  s21_from_decimal_to_int(res, &int_res);
  ck_assert_int_eq(int_res, -50);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_sub_88) {
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_decimal res = {0};
  s21_from_int_to_decimal(100, &a);
  s21_from_int_to_decimal(-50, &b);
  int err = s21_sub(a, b, &res);
  int int_res = 0;
  s21_from_decimal_to_int(res, &int_res);
  ck_assert_int_eq(int_res, 150);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_sub_89) {
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_decimal res = {0};
  s21_from_int_to_decimal(100, &a);
  s21_from_int_to_decimal(500, &b);
  int err = s21_sub(a, b, &res);
  int int_res = 0;
  s21_from_decimal_to_int(res, &int_res);
  ck_assert_int_eq(int_res, -400);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_sub_90) {
  s21_decimal a = {0};
  s21_decimal b = {0};
  s21_decimal res = {0};
  s21_from_int_to_decimal(-100, &a);
  s21_from_int_to_decimal(-500, &b);
  int err = s21_sub(a, b, &res);
  int int_res = 0;
  s21_from_decimal_to_int(res, &int_res);
  ck_assert_int_eq(int_res, 400);
  ck_assert_int_eq(err, 0);
}
END_TEST

START_TEST(test_sub_91) {
  s21_decimal dec1 = {0};
  s21_decimal dec2 = {0};
  s21_decimal ans;
  dec1.bits[0] = 532167;
  dec1.bits[3] = 196608;

  dec2.bits[0] = 1236;
  dec2.bits[3] = 983040;

  s21_decimal true_ans = {0};
  true_ans.bits[0] = 607087404;
  true_ans.bits[1] = 123904785;
  true_ans.bits[3] = 983040;
  int res = s21_sub(dec1, dec2, &ans);
  ck_assert_int_eq(ans.bits[0], true_ans.bits[0]);
  ck_assert_int_eq(ans.bits[1], true_ans.bits[1]);
  ck_assert_int_eq(ans.bits[2], true_ans.bits[2]);
  ck_assert_int_eq(ans.bits[3], true_ans.bits[3]);
  ck_assert_int_eq(res, 0);
}
END_TEST

START_TEST(test_sub_92) {
  s21_decimal dec1 = {0};
  s21_decimal dec2 = {0};
  s21_decimal ans;
  dec1.bits[0] = 532167;
  dec1.bits[3] = 196608;

  s21_decimal true_ans = {0};
  true_ans.bits[0] = 532167;
  true_ans.bits[3] = 196608;
  int res = s21_sub(dec1, dec2, &ans);
  ck_assert_int_eq(ans.bits[0], true_ans.bits[0]);
  ck_assert_int_eq(ans.bits[1], true_ans.bits[1]);
  ck_assert_int_eq(ans.bits[2], true_ans.bits[2]);
  ck_assert_int_eq(ans.bits[3], true_ans.bits[3]);
  ck_assert_int_eq(res, 0);
}
END_TEST

Suite *test_sub(void) {
  Suite *s = suite_create("\n\033[37;1m==========| S21_SUB |=========\033[0m");
  TCase *tc = tcase_create("tc_sub");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, test_sub_1);
  tcase_add_test(tc, test_sub_2);
  tcase_add_test(tc, test_sub_3);
  tcase_add_test(tc, test_sub_4);
  tcase_add_test(tc, test_sub_5);
  tcase_add_test(tc, test_sub_6);
  tcase_add_test(tc, test_sub_7);
  tcase_add_test(tc, test_sub_8);
  tcase_add_test(tc, test_sub_9);
  tcase_add_test(tc, test_sub_10);
  tcase_add_test(tc, test_sub_11);
  tcase_add_test(tc, test_sub_12);
  //   tcase_add_test(tc, test_sub_13);
  tcase_add_test(tc, test_sub_14);
  tcase_add_test(tc, test_sub_15);
  tcase_add_test(tc, test_sub_16);
  tcase_add_test(tc, test_sub_17);
  tcase_add_test(tc, test_sub_18);
  tcase_add_test(tc, test_sub_19);
  tcase_add_test(tc, test_sub_20);
  tcase_add_test(tc, test_sub_21);
  tcase_add_test(tc, test_sub_22);
  tcase_add_test(tc, test_sub_23);
  tcase_add_test(tc, test_sub_24);
  tcase_add_test(tc, test_sub_25);
  tcase_add_test(tc, test_sub_26);
  tcase_add_test(tc, test_sub_27);
  tcase_add_test(tc, test_sub_28);
  tcase_add_test(tc, test_sub_29);
  tcase_add_test(tc, test_sub_30);
  tcase_add_test(tc, test_sub_31);
  tcase_add_test(tc, test_sub_32);
  tcase_add_test(tc, test_sub_33);
  tcase_add_test(tc, test_sub_34);
  tcase_add_test(tc, test_sub_35);
  tcase_add_test(tc, test_sub_36);
  tcase_add_test(tc, test_sub_37);
  tcase_add_test(tc, test_sub_38);
  tcase_add_test(tc, test_sub_39);
  tcase_add_test(tc, test_sub_40);
  tcase_add_test(tc, test_sub_41);
  tcase_add_test(tc, test_sub_42);
  tcase_add_test(tc, test_sub_43);
  tcase_add_test(tc, test_sub_44);
  tcase_add_test(tc, test_sub_45);
  tcase_add_test(tc, test_sub_46);
  tcase_add_test(tc, test_sub_47);
  tcase_add_test(tc, test_sub_48);
  tcase_add_test(tc, test_sub_49);
  tcase_add_test(tc, test_sub_50);
  tcase_add_test(tc, test_sub_51);
  tcase_add_test(tc, test_sub_52);
  tcase_add_test(tc, test_sub_53);
  tcase_add_test(tc, test_sub_54);
  tcase_add_test(tc, test_sub_55);
  tcase_add_test(tc, test_sub_56);
  tcase_add_test(tc, test_sub_57);
  tcase_add_test(tc, test_sub_58);
  tcase_add_test(tc, test_sub_59);
  tcase_add_test(tc, test_sub_60);
  tcase_add_test(tc, test_sub_61);
  tcase_add_test(tc, test_sub_62);
  tcase_add_test(tc, test_sub_63);
  tcase_add_test(tc, test_sub_64);
  tcase_add_test(tc, test_sub_65);
  tcase_add_test(tc, test_sub_66);
  tcase_add_test(tc, test_sub_67);
  tcase_add_test(tc, test_sub_68);
  tcase_add_test(tc, test_sub_69);
  tcase_add_test(tc, test_sub_70);
  tcase_add_test(tc, test_sub_71);
  tcase_add_test(tc, test_sub_72);
  tcase_add_test(tc, test_sub_73);
  tcase_add_test(tc, test_sub_74);
  tcase_add_test(tc, test_sub_75);
  tcase_add_test(tc, test_sub_76);
  tcase_add_test(tc, test_sub_77);
  tcase_add_test(tc, test_sub_78);
  tcase_add_test(tc, test_sub_79);
  tcase_add_test(tc, test_sub_80);
  tcase_add_test(tc, test_sub_81);
  tcase_add_test(tc, test_sub_82);
  tcase_add_test(tc, test_sub_83);
  tcase_add_test(tc, test_sub_84);
  tcase_add_test(tc, test_sub_85);
  tcase_add_test(tc, test_sub_86);
  tcase_add_test(tc, test_sub_87);
  tcase_add_test(tc, test_sub_88);
  tcase_add_test(tc, test_sub_89);
  tcase_add_test(tc, test_sub_90);
  tcase_add_test(tc, test_sub_91);
  tcase_add_test(tc, test_sub_92);

  return s;
}