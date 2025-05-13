#include <stdio.h>

double slow_power(double x, int n) {
  int i;
  double result = 1.0;

  for (i=0; i<n; i++)
    result *= x;
  return result;
}

int main() {
  int n;
  double x;
  scanf("%lf %d", &x, &n);
  printf("%lf\n", slow_power(x, n));
}