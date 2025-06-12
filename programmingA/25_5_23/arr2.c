#include <stdio.h>

int main() {
  int matrix[2][3] = {{0}};
  int sum = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
      sum += matrix[i][j];
    }
  }
  printf("%d\n", sum);
  return 0;
}