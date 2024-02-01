#include "s21_math.h"

long double s21_sin(double x) {
  if (x > 2 * S21_PI || x < -2 * S21_PI) {
    x = s21_fmod(x, 2 * S21_PI);
  }

  long double result = x;
  long double term = x;
  long double sign = -1.0;

  for (int n = 3; n <= 100; n += 2) {
    term *= (x * x) / (n * (n - 1));
    result += sign * term;
    sign *= -1;
  }

  return result;
}
