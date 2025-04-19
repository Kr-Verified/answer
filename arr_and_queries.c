#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    for (int i=0; i<queries_rows; i++)
        for (int j=queries[i][0]; j<=queries[i][1]; j++) arr[j]++;
    
    return arr;
}

int main() {
  int arr[] = {0, 1, 2, 3, 4};
  int **queries = malloc(sizeof(int*)*3);
  for (int i=0; i<3; i++)
  {
      queries[i] = malloc(sizeof(int)*2);
      queries[i][0] = i;
      queries[i][1] = i+1;
  };
  int *answer = solution(arr, 5, queries, 3, 2);
  for (int i = 0; i < 5; i++) printf("%d ",answer[i]);
  return 0;
}