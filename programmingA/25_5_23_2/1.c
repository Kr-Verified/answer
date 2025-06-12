#include <stdio.h>

int main() {
  char str[] = "Hello";
  int i;
  for (i = 0; str[i]!='\0'; i++);
  printf("%d", i);
  return 0;
}