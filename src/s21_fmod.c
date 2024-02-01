#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result;

  if (s21_isnan(x) || s21_isnan(y)) {
    result = S21_NAN;
  } else if (s21_isinf(x) && s21_isinf(y)) {
    result = S21_NAN;
  } else if (s21_isinf(x) && !s21_isinf(y)) {
    result = S21_NAN;
  } else if (s21_isinf(x) || s21_isinf(y)) {
    result = x;
  } else {
    long int quotient = (long int)(x / y);
    result = x - quotient * y;
  }

  return result;
}
