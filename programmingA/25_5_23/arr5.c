#include <stdio.h>

int main() {
  int matrix[3][3] = {{0}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  int mirror = 1;
  for (int i = 0; i < 3; i++) {
    if (matrix[i][2-i] != matrix[2-i][i]) mirror = 0;
  }
  printf("%s\n", mirror ? "YES" : "NO");
  return 0;
}