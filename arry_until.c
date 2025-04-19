#include <stdio.h>
#include <stdlib.h>

int* solution(int num_list[], int n) {
    int* answer = (int*)malloc(sizeof(int)*n);
    for (int i=0; i<n; i++) {
        answer[i] = num_list[i];
    }
    return answer;
}

int main() {
  int num_list[] = {5, 2, 1, 7, 5};
  int *answer = {(solution(num_list, 3))};
  for (int i=0; i<sizeof(answer)/sizeof(int)+1; i++) printf("%d\n", answer[i]);
  free(answer);
  return 0;
}