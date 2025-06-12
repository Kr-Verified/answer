#include <stdio.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);
  char prev = str[0];
  int cnt = 1;
  for (int i = 1; str[i] != '\0' && str[i] != '\n'; i++) {
    if (str[i] == prev) {
      cnt++;
    } else {
      printf("%c%d", prev, cnt);
      prev = str[i];
      cnt = 1;
    }
  }
  printf("%c%d", prev, cnt);
  return 0;
}
