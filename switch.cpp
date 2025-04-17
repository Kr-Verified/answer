#include <stdio.h>

int main(void) {
  switch('A')
  {
  case 'A':
    printf("1");
  case 2:
    printf("2");
    break;
  default:
    printf("3");
  }
  return 0;
}