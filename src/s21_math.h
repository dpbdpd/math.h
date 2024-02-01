#ifndef S21_MATH_H
#define S21_MATH_H

#define S21_NAN (0.0 / 0.0)
#define S21_POS_INF (1.0 / 0.0)
#define S21_NEG_INF (-1.0 / 0.0)
#define S21_PI 3.14159265358979323846
#define S21_LN10 2.30258509299404568402
#define S21_DBL_MAX 1.7976931348623157E+307

#define EPSILON_6 1e-6
#define EPSILON_9 1e-9

long double s21_log(double x);
long double s21_pow(double base, double exp);
double min_pow(double base, int exp);

long double s21_sqrt(double x);

int s21_abs(int x);
long double s21_fabs(double x);

double s21_modf(double x, double *int_part);
int s21_isinf(double num);
int s21_isnan(double num);

long double s21_fmod(double x, double y);
long double s21_floor(double x);
long double s21_ceil(double x);

long double s21_cos(double x);
long double s21_sin(double x);
long double s21_tan(double x);

long double s21_exp(double x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);

#endif  // S21_MATH_H
