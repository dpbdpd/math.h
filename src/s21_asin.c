#include "s21_math.h"

long double s21_asin(double x) {
  long double res = 0;
  if (x >= -1.0 && x <= 1.0) {
    res = s21_atan(x / s21_sqrt(1 - s21_pow(x, 2)));
  } else {
    res = S21_NAN;
  }
  return res;
}
