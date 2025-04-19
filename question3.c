#include <stdio.h>

int main() {
  int a, b;
  char op;
  scanf("%d %d %c", &a, &b, &op);
  if (op == '+') {
    printf("%d %c %d = %d\n", a, op, b, a + b);
  }else if (op == '-') {
    printf("%d %c %d = %d\n", a, op, b, a - b);
  }else if (op == '*') {
    printf("%d %c %d = %d\n", a, op, b, a * b);
  }else if (op == '/') {
    if (b == 0)
    {
      printf("0으로 나눌 수 없습니다.");
    }else
    {
      printf("%d %c %d = %.2f\n", a, op, b, (float)a / b);
    }
  }else if (op == '%') {
    printf("%d %c %d = %d\n", a, op, b, a % b);
  }else
  {
    printf("잘못입력하셨습니다.");
  }
  return 0;
}