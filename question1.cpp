#include <stdio.h>

int main() {
  int a, b;
  char op;
  scanf("%d %d %c", &a, &b, &op);
  if (op == '+') {
    printf("%d\n", a + b);
  }else if (op == '-') {
    printf("%d\n", a - b);
  }else if (op == '*') {
    printf("%d\n", a * b);
  }else if (op == '/') {
    printf("%d\n", a / b);
  }else if (op == '%') {
    printf("%d\n", a % b);
  }else {
    printf("올바른 연산자를 입력하시오.");
  }
  return 0;
}