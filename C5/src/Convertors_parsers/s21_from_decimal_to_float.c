#include "../s21_decimal.h"

// Возвращаемое значение - код ошибки:
// 0 - OK
// 1 - ошибка конвертации

// Уточнение про преобразование числа типа float:
// Если числа слишком малы (0 < |x| < 1e-28), вернуть ошибку и значение, равное
// 0 Если числа слишком велики (|x| > 79,228,162,514,264,337,593,543,950,335)
// или равны бесконечности, вернуть ошибку При обработке числа с типом float
// преобразовывать все содержащиеся в нём значимые десятичные цифры. Если таких
// цифр больше 7, то значение числа округляется к ближайшему, у которого не
// больше 7 значимых цифр.

// Уточнение про преобразование из числа типа decimal в тип int:
// Если в числе типа decimal есть дробная часть, то её следует отбросить
// (например, 0.9 преобразуется 0)

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  s21_convertors_error_code error_code = S21_CONVERTORS_OK;
  if (dst != NULL) {
    long long int bits = 0;
    for (int i = 95; i >= 0; i--)
      if (get_bit(&src, i)) {
        bits = i;
        i = 0;
      }
    int power = get_exp(src);

    double number = 0;
    for (int i = 0; i <= bits; i++) number += pow(2, i) * get_bit(&src, i);
    number = number / pow(10, power);
    if (get_bit(&src, 127)) number *= -1;
    *dst = number;
  } else {
    error_code = S21_CONVERTORS_ERROR;
  }
  return error_code;
}