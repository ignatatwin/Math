#ifndef S21_MATH_H_
#define S21_MATH_H_

#include <stdio.h>

#define s21_NAN 0.0 / 0.0  // not a number
#define s21_IS_NAN(x) (x != -x)
#define s21_INF 1.0 / 0.0                             // check nan
#define s21_INFINITY_PLUS 1.0 / 0.0                   // 7ff0000000000000
#define s21_INFINITY_MIN -1.0 / 0.0                   // fff0000000000000
#define s21_PI 3.14159265358979323846264338327950288  // pi
#define s21_E 2.71828182845904523536028747135266250   // e
#define s21_E_MAX_DEG 709.7827  // max degree of e for eps()
#define s21_E_MIN_DEG -708.39   // min degree of e for eps()

#define s21_MIN_DOUBLE 0x0000000000000001            // min double
#define s21_MAX_DOUBLE 0x7fefffffffffffff            // max double
#define s21_MAX_LONG_DOUBLE 1.7976931348623157E+308  // max long double
#define s21_MIN_LONG_DOUBLE 3.3621e-4932             // min long double

#define S21_PI_12 (S21_PI / 12.F)
#define S21_PI_6 (S21_PI / 6.F)
#define S21_PI_2 (S21_PI / 2.F)
#define S21_SQRT_3 ((float)1.732050807569)
#define S21_EPS 1e-25
#define TEST_EPS 1e-6l
#define S21_INF __builtin_inf()
#define S21_NAN __builtin_nan("")
#define s21_is_inf __builtin_isinf
#define s21_is_nan __builtin_isnan

#define S21_NEGZERO -0.0

#define S21_E 2.718281828459045
#define S21_PI 3.141592653589793
#define S21_ASIN_EPS 1e-16l;
#define S21_SQRT_EPS 1e-20l
#define s21_EPS 1e-17
#define s21_LN10 2.30258509299404590109

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_faq(double faq);

#endif  // S21_MATH_H_