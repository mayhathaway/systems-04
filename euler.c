#include <stdio.h>
#include <stdlib.h>

int problem01() {

  int i;
  int total = 0;
  int repeats = 0;

  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      total += i;
    }
    if (i % 5 == 0) {
      total += i;
    }
    if (i % 15 == 0) {
      repeats += i;
    }
  }

  int result = total - repeats;
  return result;
}

int problem06() {
  int sum_individual = 0;
  int sum_total = 0;

  int i;
  for (i = 0; i <= 100; i++) {
    sum_individual += i * i;
  }

  for (i = 0; i <= 100; i++) {
    sum_total += i;
  }
  sum_total = sum_total * sum_total;

  int result = sum_total - sum_individual;
  return result;
}
