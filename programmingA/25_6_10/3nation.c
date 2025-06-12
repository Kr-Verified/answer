#include <stdio.h>

int add3(int num) {
  int mul=1, result=0;
  while (num>0)
  {
    int temp = num % 10;
    result += (temp>3?temp-1:temp)*mul;
    mul*=9;
    num/=10;
  }
  return result;
}

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d\n", add3(n));
  return 0;
}