#include "s21_math.h"

long double s21_atan(double x) {
  long double res = 0;
  long double pip = x;
  if (x < 0) pip *= -1;

  if (x > -1.0 && x < 1.0) {
    long double order = 0, well = 1.1;
    while (s21_fabs(well) > EPSILON_9) {
      long double past = res;

      res += ((s21_pow(-1, order) * s21_pow(pip, (2 * order + 1))) /
              (2 * order + 1));
      well = res - past;
      order += 1;
    }

    if (x < 0 && x > -1) res *= -1;
  } else if (x == 1.0) {
    res = S21_PI / 4;
  } else if (x == -1.0) {
    res = -S21_PI / 4;
  } else if (x > 1 || x < -1) {
    int p = 0;

    if (x < 0) {
      x *= -1;
      p = 1;
    }

    res = S21_PI / 2 - s21_atan(1 / x);

    if (p == 1) res *= -1;
  } else {
    res = S21_NAN;
  }

  return res;
}
