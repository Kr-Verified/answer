#include <stdio.h>

void prime(int n) {
   int j=2;
   while (j*j<=n) {
     if (n%j++==0) {
       printf("소수가 아닙니다.");
       return;
     }
   }
  printf("소수입니다.");
}

int main(void) {
  int n;
  scanf("%d", &n);
  prime(n);
  return 0;
}