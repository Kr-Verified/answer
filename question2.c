#include <stdio.h>

int main() {
  int n, a=0, b=0, temp;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    if (temp%2==0) a++;
    else if (temp%3==0)b++;
  }
  printf("%d\n", a>b?a:b);
  return 0;
}