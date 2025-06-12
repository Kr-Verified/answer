#include <stdio.h>

int main() {
  int nums[7] = {0};
  for (int i = 0; i < 7; i++) scanf("%d", &nums[i]);
  for (int i = 7; i >= 0; i--) printf("%d ", nums[i]);
  return 0;
}