#include "./s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = 0.0;
  int sign = 1;
  if (__builtin_isinf(x) || x == -S21_INF || __builtin_isnan(x) ||
      __builtin_isnan(y) || y == 0) {
    if (__builtin_isinf(x)) {
      result = -S21_NAN;
    } else
      result = S21_NAN;
  } else {
    if (x < 0) {
      sign = -1;
      x = s21_fabs(x);
    }
    if (y < 0) {
      y = s21_fabs(y);
    }
    if (x == y) {
      result = 0;
    } else if (x < y) {
      result = x;
    } else {
      long long int mod = x / y;
      result = (long double)x - mod * (long double)y;
    }
    result *= sign;
  }
  return result;
}
