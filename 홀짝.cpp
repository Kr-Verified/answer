#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  if (a%2==0) {
    printf("짝수\n");
  }else {
    printf("홀수\n");
  }

  if (a%3==0) {
    printf("x");
  }
  return 0;
}