#include <stdio.h>

int factorial(int n) {
  int i, result = 1;
  for (i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", factorial(n));
}