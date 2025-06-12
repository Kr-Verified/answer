#include <stdio.h>

int find_gcd(int a, int b) {
  if (a>b) {
    int temp = a;
    a = b;
    b = temp;
  }
  for (int i = a; i>0; i--) if (a%i==0 && b%i==0) return i;
  return -1;
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  int gcd = find_gcd(a, b);
  printf("%d\n", gcd);
  return 0;
}