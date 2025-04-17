#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    int left = 0, right = arr_len-1;
    for (int i=0; i<query_len; i++) {
        if (i%2==0) right = query[i]+left;
        else left = query[i]+left;
    }
    printf("left: %d, right: %d\n", left, right);
    int* answer = (int*)malloc(sizeof(int)*(right-left+1));
    for (int i=0; i<right-left+1; i++) answer[i] = arr[i+left];
    return answer;
}

int main()
{
    int arr[6] = {0, 1, 2, 3, 4, 5}, query[3] = {4, 1, 2};
    int* answer = solution(arr, 6, query, 3);
    for (int i=0; answer[i]; i++)
    {
        printf("%d\n", answer[i]);
    }
}