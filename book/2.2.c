#include <stdio.h>

int factorial(int n) {
  printf("factorial(%d)\n", n);
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", factorial(n));
}