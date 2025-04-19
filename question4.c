#include <stdio.h>

int main() {
  int a=0;
  scanf("%d",&a);
  printf("%s", (a&(a-1))==0?"2의 거듭제곱입니다":"2의 거듭제곱이 아닙니다");
  return 0;
}