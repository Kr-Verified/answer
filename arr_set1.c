#include <stdio.h>

int* solution(int arr[], size_t arr_len) {
    for (int i=0; i<arr_len; i++) {
        if (!(arr[i]&1) && arr[i]>=50) arr[i]>>=1;
        else if (arr[i]&1 && arr[i]<50) arr[i]<<=1;
    }
    return arr;
}

int main() {
  int arr[] = {1, 2, 3, 100, 99, 98};
  int *answer = solution(arr, sizeof(arr)/sizeof(arr[0]));
  for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    printf("%d ", answer[i]);
  }
}