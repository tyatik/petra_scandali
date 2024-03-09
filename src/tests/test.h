#ifndef SRC_TESTS_TEST_H_
#define SRC_TESTS_TEST_H_

#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_string.h"

Suite *test_memchr(void);
Suite *test_memcmp(void);
Suite *test_memcpy(void);
Suite *test_strlen(void);
Suite *test_memset(void);
Suite *test_strncmp(void);
Suite *test_strchr(void);
Suite *test_strrchr(void);
Suite *test_strncpy(void);
Suite *test_strncat(void);
Suite *test_strpbrk(void);
Suite *test_strerror(void);
Suite *test_strcspn(void);
Suite *test_strstr(void);
Suite *test_memmove(void);
Suite *test_sprintf(void);
Suite *test_to_lower(void);
Suite *test_to_upper(void);

#endif  // SRC_TESTS_TEST_H_
