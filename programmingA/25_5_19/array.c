#include <stdio.h>

int main() {
  int nums[10];
  int max=0, min=nums[0];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &nums[i]);
    if (nums[i] > max) {
      max = nums[i];
    }
    if (nums[i] < min) {
      min = nums[i];
    }
  }
  printf("%d %d\n", max, min);
  return 0;
}
