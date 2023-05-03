#include "s21_math.h"

long double s21_cos(double x) {
  double pow = 0.0;
  long double res = 1.0;
  long double num = 1.0;
  long double xl = s21_fmod(x, 2.0 * s21_PI);

  if (s21_fabs(x) == s21_NAN || s21_fabs(x) == s21_INF) {
    res = s21_NAN;
  } else {
    while (s21_fabs(num / res) > s21_EPS) {
      pow = pow + 2.0;
      num = (-num * xl * xl) / ((pow - 1.0) * (pow));
      res += num;
    }
  }
  return res;
}