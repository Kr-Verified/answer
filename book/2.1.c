#include <stdio.h>

int facotrial(int n) {
  if (n<=1) return 1;
  return n*facotrial(n-1);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", facotrial(n));
}