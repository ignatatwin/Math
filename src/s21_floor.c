#include "s21_math.h"

long double s21_floor(double x) {  // возвращает ближайшее целое число, не
                                   // превышающее заданное значение
  long double res = 0;
  long int y = 0;
  if (x >= 0)
    y = x;
  else
    y = x - 1;
  return res = y;
}