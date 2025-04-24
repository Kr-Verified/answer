#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* solution(const char* myString, int *size) {
    int len = 0, pos = 1;
    int* answer = (int*)malloc(sizeof(int)*1);
    for (int i=0; i<strlen(myString); i++) {
        if (myString[i]=='x') {
            answer[pos-1] = len;
            answer = (int*)realloc(answer, sizeof(int)*++pos);
            len = 0;
        }else len++;
    }
    answer[pos-1] = len;
    *size = pos;
    return answer;
}

int main() {
  const char* myString = "oxooxoxxox";
    int size;
  int* answer = solution(myString, &size);
  for (int i=0; i<size; i++) {
    printf("%d\n", answer[i]);
  }
  return 0;
}