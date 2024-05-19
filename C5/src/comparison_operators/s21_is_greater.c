#include "../s21_decimal.h"

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  s21_comparison_return_value return_value = 1;
  int sign1 = get_sign(value_1);
  int sign2 = get_sign(value_2);
  if ((sign1 == 1) && (sign2 == 0)) {
    return_value = 0;
  } else if ((sign1 == 0) && (sign2 == 1)) {
    int flag_null_value_1 =
        (value_1.bits[0] == 0 && value_1.bits[1] == 0 && value_1.bits[2] == 0)
            ? 1
            : 0;
    int flag_null_value_2 =
        (value_2.bits[0] == 0 && value_2.bits[1] == 0 && value_2.bits[2] == 0)
            ? 1
            : 0;
    return_value = (flag_null_value_1 == 1 && flag_null_value_2 == 1)
                       ? S21_COMPARISON_FALSE
                       : S21_COMPARISON_TRUE;
  } else {
    if (s21_is_less_or_equal(value_1, value_2) == 1) {
      return_value = S21_COMPARISON_FALSE;
    }
  }

  return return_value;
}