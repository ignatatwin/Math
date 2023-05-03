#include "s21_math.h"

long double s21_acos(double x) {
  long double acosinus = 0.0;
  if (s21_fabs(x) < 1) {
    acosinus = S21_PI_2 - s21_asin(x);
  } else if (x == 1) {
    acosinus = 0;
  } else if (x == -1) {
    acosinus = s21_PI;
  } else if (x == 0) {
    acosinus = S21_PI_2;
  } else
    acosinus = s21_NAN;
  return acosinus;
}
