#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 1, series = 1;
  size_t i = 1, flg = 0;
  if (s21_NAN == x) {
    series = s21_NAN;
  } else if (x > s21_E_MAX_DEG) {
    series = s21_INFINITY_PLUS;
  } else if (x < s21_E_MIN_DEG) {
    series = 0.0;
  } else {
    if (x < 0) x *= -1, flg = 1;
    while (s21_fabs(result) > s21_EPS) {
      result *= (x / i);
      i++;
      series += result;
    }
  }
  if (flg && series > 0.0) series = 1.0 / series;

  return series;
}