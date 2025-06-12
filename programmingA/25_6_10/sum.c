#include <stdio.h>

int total_sum(int n) {
  return n*(n+1)/2;
}

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", total_sum(n));
  return 0;
}