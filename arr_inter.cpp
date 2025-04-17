#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc(sizeof(int)*ceil((float)num_list_len/n));
    printf("%d\n", ceil((float)num_list_len/n));
    for (int i=0; i<num_list_len/n; i++) {
        answer[i] = num_list[i*n];
    }
    return answer;
}

int main(void) {
  int num_list[] = {4, 2, 6, 1, 7, 6};
  int *answer = solution(num_list, sizeof(num_list)/sizeof(int), 4);
  for (int i=0; i<sizeof(answer)/sizeof(int)+1; i++) printf("%d\n", answer[i]);
}