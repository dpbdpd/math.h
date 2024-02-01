#include "s21_math.h"

long double s21_floor(double x) {
  long double result;

  if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (s21_isinf(x)) {
    result = x;
  } else {
    double int_part;
    double frac_part;

    frac_part = s21_modf(x, &int_part);

    if (frac_part < 0 && frac_part != 0.0) {
      int_part--;
    }

    result = int_part;
  }

  return result;
}
