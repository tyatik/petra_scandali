#include "./s21_math.h"

long double taylors_series(long double x, int dir_val) {
  long double temp = x;
  long double result = x;
  for (long int i = 3; s21_fabs(temp) > ACCURACY; i += 2) {
    temp *= -1 * (x * x) * (i - 2) / i;
    result += temp;
  }
  if (dir_val) {
    result = (x < 0) ? -1 * S21_M_PI_2 - result : 1 * S21_M_PI_2 - result;
  }
  return result;
}

long double s21_atan(double x) {
  long double result = 0.0L;
  if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (s21_isinf(x)) {
    result = (x > 0) ? S21_M_PI_2 : -1 * S21_M_PI_2;
  } else if (s21_fabs(x) == 1) {
    result = x * S21_M_PI_4;
  } else {
    int dir_val = (s21_fabs(x) > 1) ? 1 : 0;
    if (s21_fabs(x) > 1) x = 1 / x;
    result = taylors_series(x, dir_val);
  }
  return result;
}
