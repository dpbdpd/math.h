#include "s21_math.h"

double s21_modf(double x, double *int_part) {
  double result;

  if (s21_isnan(x)) {
    *int_part = S21_NAN;
    result = S21_NAN;
  } else {
    long int whole_part = (long int)x;
    *int_part = whole_part;
    result = x - whole_part;
  }

  return result;
}
