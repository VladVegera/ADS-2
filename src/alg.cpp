// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
double base = value;
if (n == 0) {
  return 1;
} else {
for (int i = 1; i < n; i++) {
 base = value * base;
}
}
return base;
}

uint64_t fact(uint16_t n) {
if (n == 0) {
  return 1;
} else {
  return n * fact(n - 1);
}
}

double calcItem(double x, uint16_t n) {
double res = (pown(x, n) / fact(n));
return res;
}

double expn(double x, uint16_t count) {
double exps = 0;
for (uint16_t i = 0; i <= count; i++) {
  exps += calcItem(x, i);
}
return exps
}

double sinn(double x, uint16_t count) {
double sinx = 0;
for (uint16_t i = 1; i <= count; ++i) {
  sinx = sinx + pown(-1, (i - 1)) * calcItem(x, (2 * i - 1));
}
return sinx;
}

double cosn(double x, uint16_t count) {
double cosx = 0;
for (uint16_t i = 1; i <= count; ++i) {
  cosx = cosx + pown(-1, (i - 1)) * calcItem(x, (2 * i - 2));
}
return cosx;
}
