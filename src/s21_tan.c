#include "s21_math.h"

long double s21_tan(double x) {
  if (x > 2 * S21_PI || x < -2 * S21_PI) {
    x = s21_fmod(x, 2 * S21_PI);
  }

  return (s21_sin(x) / s21_cos(x));
}
