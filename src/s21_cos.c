#include "s21_math.h"

long double s21_cos(double x) {
  long double result = S21_NAN;

  if (x != S21_POS_INF && x != S21_NEG_INF && !s21_isnan(x)) {
    while (x > S21_PI) {
      x -= 2 * S21_PI;
    }

    while (x < -S21_PI) {
      x += 2 * S21_PI;
    }

    result = s21_sin(S21_PI / 2 - x);
  }

  return result;
}
