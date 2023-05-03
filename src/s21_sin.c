#include "s21_math.h"
// #include <math.h>

long double s21_sin(double x) {
  x *= 2 / s21_PI;
  long int sign = x < 0.0;
  x = sign ? -x : x;
  long int xf = (int)x;
  x -= xf;
  if ((xf & 1) == 1) x = 1 - x;
  long int per = ((xf / 2) & 1);
  long double xInCUbe = s21_pow(x, 2);
  long double y = x * (1.5707903005870776 +
                       xInCUbe * (-0.6458858977085938 +
                                  xInCUbe * (0.07941798513358536 -
                                             0.0043223880120647346 * xInCUbe)));
  return sign ^ per ? -y : y;
}
