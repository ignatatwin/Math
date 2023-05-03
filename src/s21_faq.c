#include "s21_math.h"

long double s21_faq(double faq) {
  if (faq == 0 || faq == 1)
    faq = 1;
  else
    for (int i = (faq - 1); i > 1; i--) {
      faq *= i;
    }
  return faq;
}