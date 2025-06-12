#include <stdio.h>

int main() {
  int martix[3][4] = {{0}};
  int t_m[4][3] = {{0}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &martix[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      t_m[j][i] = martix[i][j];
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", t_m[i][j]);
    }
    printf("\n");
  }
  return 0;
}