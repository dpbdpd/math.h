#include "s21_math.h"

long double s21_sqrt(double x) {
  long double result = 0;

  if (x < 0 || x != x)
    result = S21_NAN;
  else if (x == S21_POS_INF)
    result = S21_POS_INF;
  else
    result = s21_pow(x, 1. / 2);

  return result;
}
