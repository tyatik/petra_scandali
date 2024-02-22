#include "s21_string.h"

// возвращает указатель на первое вхождение значения c среди первых n байтов s
// или NULL, если не найдено
void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *char_ptr = (unsigned char *)str;
  unsigned char c_ptr = (unsigned char)c;
  while (--n > 0 && *char_ptr++ != c_ptr) {
    if (*char_ptr == c_ptr && n != 0) {
      return (void *)char_ptr;
      break;
    }
  }
  return s21_NULL;
}