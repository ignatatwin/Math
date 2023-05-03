#include "s21_math_test.h"

START_TEST(test_sin_small_positive) {
  double x = 2.523;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

START_TEST(test_sin_small_negative) {
  double x = -2.523;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

START_TEST(test_sin_huge_positive) {
  double x = 923456789;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

START_TEST(test_sin_huge_negative) {
  double x = -923456789;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

START_TEST(test_sin_zero) {
  double x = 0;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

START_TEST(test_sin_nan) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

START_TEST(test_sin_big_mantissa) {
  double x = 0.12345678901234567890;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
}
END_TEST

Suite *suite_sin(void) {
  Suite *s = suite_create("suite_sin");
  TCase *tc = tcase_create("sin_tc");

  tcase_add_test(tc, test_sin_small_positive);
  tcase_add_test(tc, test_sin_small_negative);
  tcase_add_test(tc, test_sin_huge_positive);
  tcase_add_test(tc, test_sin_huge_negative);
  tcase_add_test(tc, test_sin_zero);
  tcase_add_test(tc, test_sin_nan);
  tcase_add_test(tc, test_sin_big_mantissa);

  suite_add_tcase(s, tc);
  return s;
}