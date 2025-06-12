#include <stdio.h>

int main() {
  int nums[10];
  int zero = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &nums[i]);
    if (nums[i] == 0) {
      zero = 1;
    }
  }
  for (int i = 0; i < 10; i+=1+zero) {
    printf("%d ", nums[i]);
  }
  return 0;
}