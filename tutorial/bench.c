#include <stdio.h>

int sum_total (int n) {
  int i = 1;
  int j = 1;
  int result = 0;

  while (n > i) {
    j = 1;
    while (i > j) {
      result += 1;
      j += 1;
    }
    i += 1;
  }

  return result;
}

int main (void) {
  printf("%d", sum_total(30000));
  return 0;
}
