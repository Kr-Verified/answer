#include <stdio.h>

double power(double x, int n) {
  if (n == 0) return 1;
  if (n%2==0) return power(x*x, n/2);
  return x*power(x*x, (n-1)/2);
}

int main() {
  int n;
  double x;
  scanf("%lf %d",&x, &n);
  printf("%lf\n", power(x, n));
  return 0;
}