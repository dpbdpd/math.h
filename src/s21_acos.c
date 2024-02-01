#include "s21_math.h"

long double s21_acos(double x) {
  long double res = 0, part1 = 0;
  part1 = s21_sqrt(1 - s21_pow(x, 2));
  if (x >= 0 && x <= 1.0)
    res = s21_asin(part1);
  else if (x < 0 && x >= -1.0)
    res = S21_PI - s21_asin(part1);
  else
    res = S21_NAN;
  return res;
}
