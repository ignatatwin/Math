#include "s21_math.h"

long double s21_log(double x) {
  long double result = 0, itr = 100, value = 0, e_full_part = 0;
  if (s21_NAN == x) {
    result = s21_NAN;
  } else if (x == 1) {
    result = 0.0;
  } else if (x == s21_INFINITY_PLUS) {
    result = s21_INFINITY_PLUS;
  } else if (x == 0) {
    result = s21_INFINITY_MIN;
  } else if (x > 0) {
    while (x >= s21_E) e_full_part++, x /= s21_E;
    while (itr--) {
      value = result;
      result = value + 2 * ((x - s21_exp(value)) / (x + s21_exp(value)));
    }
  } else {
    result = 0 / 0.0;
  }
  return result + e_full_part;
}