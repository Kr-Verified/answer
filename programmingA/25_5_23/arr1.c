#include <stdio.h>

int main() {
  int arr[5] = {1, 2.15, 3.8, 'A'};
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}