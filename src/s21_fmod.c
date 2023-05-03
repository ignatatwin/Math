#include "s21_math.h"

long double s21_fmod(double x,
                     double y) {  // остаток операции деления с плавающей точкой
  double res = 0;                 // dont touch
  long int total = 0;
  long double final = 0;
  if (x < 0 && x != s21_INFINITY_PLUS && x != s21_INFINITY_MIN) {
    x = -x;
    total = x / y;
    final = total * y;
    res = -(x - final);
  } else if (x < y) {
    if (x > 0) {
      res = x;
    }
  } else if (x == 0 || y == 0) {
    res = s21_NAN;
  } else if (x > y && x != s21_INFINITY_MIN && y != s21_INFINITY_MIN &&
             x != s21_INFINITY_PLUS) {
    total = x / y;
    final = total * y;
    res = x - final;
  } else if (res == s21_INFINITY_PLUS || res == s21_INFINITY_MIN) {
    res = s21_NAN;
  } else if (y == s21_INFINITY_MIN || y == s21_INFINITY_PLUS) {
    res = x;
  } else if (x == s21_INFINITY_MIN || x == s21_INFINITY_PLUS) {
    res = s21_NAN;
  } else {
    res = s21_NAN;
  }

  return res;
}
