#include "s21_math.h"

long double s21_exp(double x) {
  long double res = 1, check = 1;
  double pip = x;

  if (pip < 0) pip *= -1;

  if (x == S21_NEG_INF) {
    res = 0;
  } else if (x <= -24) {
    res = EPSILON_9;
  } else {
    for (int i = 1; i < 126; i++) {
      check *= (pip / i);

      if (x < 0) {
        res += (s21_pow(-1, i) * check);
      } else {
        res += check;
      }

      if (res >= S21_DBL_MAX) {
        res = S21_POS_INF;
        i = 5001;
      }
    }
  }
  if (res < 0) res *= -1;

  return res;
}
