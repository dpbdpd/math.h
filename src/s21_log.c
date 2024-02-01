#include "s21_math.h"

long double s21_log(double x) {
  long double result = 0;

  if (x < 0 || x == S21_NAN)
    result = S21_NAN;
  else if (x == 0)
    result = S21_NEG_INF;
  else if (x == S21_POS_INF)
    result = S21_POS_INF;
  else {
    result = 0;
    int count = 0;

    for (; x >= 2; count++) x /= 10;

    for (int i = 0; i < 100; i++) {
      long double result_prev = result;

      result += 2 * (x - s21_exp(result_prev)) / (x + s21_exp(result_prev));
    }

    result += count * S21_LN10;
  }

  return result;
}
