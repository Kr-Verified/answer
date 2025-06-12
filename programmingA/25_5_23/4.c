#include <stdio.h>

int main() {
  int nums[7] = {0};
  for (int i = 0; i < 7; i++) {
    scanf("%d", &nums[i]);
  }
  for (int i = 0; i<3; i++) {
    int temp = nums[i];
    nums[i] = nums[6-i];
    nums[6-i] = temp;
  }
  for (int i = 0; i<7; i++) {
    printf("%d ", nums[i]);
  }
  return 0;
}