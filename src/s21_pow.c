#include "s21_math.h"

double min_pow(double base, int exp) {
  double result = 1;
  for (int i = 0; i < exp; i++) {
    result *= base;
  }

  return result;
}

double base_is_zero(double exponent) {
  double result = 0;
  if (exponent < 0) result = S21_POS_INF;

  return result;
}

long double s21_pow(double base, double exponent) {
  long double result = 0;

  if (exponent == 0)
    result = 1;
  else if (exponent == 1) {
    result = base;
  } else if (exponent == -1) {
    result = 1 / base;
  } else if (base != base || exponent != exponent) {
    result = S21_NAN;
  } else if (base == 0) {
    result = base_is_zero(exponent);
  } else if (exponent == S21_POS_INF) {
    if (base == 1 || base == -1)
      result = 1;
    else
      result = S21_POS_INF;
  } else if (exponent == S21_NEG_INF) {
    if (base == 1 || base == -1)
      result = 1;
    else
      result = 0;
  } else if (base < 0 &&
             (s21_fabs(exponent) - (int)(s21_fabs(exponent))) != 0) {
    if (base == S21_NEG_INF && exponent < 0)
      result = 0;
    else if (base == S21_NEG_INF && exponent > 0)
      result = S21_POS_INF;
    else
      result = S21_NAN;
  } else if (base < 0)
    if (exponent > 0)
      result = min_pow(base, (int)exponent);
    else
      result = 1 / min_pow(base, (int)(-exponent));
  else
    result = s21_exp(exponent * s21_log(base));

  return result;
}
