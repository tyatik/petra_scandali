#include "../s21_decimal.h"

// Возвращаемое значение - код ошибки:
// 0 - OK
// 1 - ошибка конвертации

// Уточнение про преобразование из числа типа decimal в тип int:
// Если в числе типа decimal есть дробная часть, то её следует отбросить
// (например, 0.9 преобразуется 0)

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  s21_convertors_error_code error_code = S21_CONVERTORS_OK;
  if (dst) {
    if (src.bits[1] == 0 && src.bits[2] == 0 &&
        src.bits[0] <= (unsigned int)2147483648U) {
      *dst = src.bits[0];

      if (get_sign(src)) *dst *= -1;
      *dst /= (int)pow(10, get_exp(src));
    } else {
      error_code = S21_CONVERTORS_ERROR;
    }
  } else {
    error_code = S21_CONVERTORS_ERROR;
  }
  return error_code;
}