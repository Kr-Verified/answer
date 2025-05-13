#include <stdio.h>

int seq_search(int list[], int key, int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (list[i] == key) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  int n, list[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &list[i]);
  }
  seq_search(list, 100, n);
  return 0;
}