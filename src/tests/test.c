#include "./test.h"

int main(void) {
  int number_failed = 0;
  Suite *test[] = {test_memchr(), test_memcmp(), test_memcpy(), test_strlen(),
                   NULL};
  SRunner *sr;
  int i = 0;
  while (test[i] != NULL) {
    sr = srunner_create(test[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    i++;
    (number_failed != 0)
        ? printf("\033[31;1m=========FAILED: %d =========\033[0;0m\n",
                 number_failed)
        : printf("\033[32;1m=========FAILED: %d =========\033[0;0m\n",
                 number_failed);
  }

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

// int main(void) {
//   int number_failed;
//   Suite *s;
//   SRunner *sr;

//   s = money_suite();
//   sr = srunner_create(s);

//   srunner_run_all(sr, CK_NORMAL);
//   number_failed = srunner_ntests_failed(sr);
//   srunner_free(sr);
//   return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
// }