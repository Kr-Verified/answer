#include <stdio.h>

int main() {
  int n = 0;
  scanf("%d", &n);
  for (int i = 2; i <= n; i++) {
    int isPrime = 1;
    for (int j = 2; j*j <= i; j++) {
      if (i % j == 0) isPrime = 0;
    }
    if (isPrime) printf("%d ", i);
  }
  return 0;
}