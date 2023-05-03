#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double result = 0;
  if (exp == 0)
    result = 1.0;
  else if (base == s21_INFINITY_MIN)
    result = 0;
  else if (exp > 0) {
    if (base > 0)
      result = s21_exp(exp * s21_log(base));
    else
      result = s21_exp(exp * s21_log(-base));
  } else if (exp < 0) {
    if (base > 0)
      result = 1.0 / (s21_exp(-exp * s21_log(base)));
    else if (base < 0)
      result = -1.0 / (s21_exp(-exp * s21_log(-base)));
    else
      result = s21_NAN;
  } else {
    result = s21_NAN;
  }
  return result;
}
