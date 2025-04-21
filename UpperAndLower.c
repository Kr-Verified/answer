#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = (char**)malloc(sizeof(char*)*strArr_len);
    for (int i=0; i<strArr_len; i++) {
        answer[i] = (char*)malloc(sizeof(char)*(strlen(strArr[i])+1));
        for (int j=0; j<strlen(strArr[i]); j++) {
            answer[i][j] = (i&1)==0?strArr[i][j]|32:strArr[i][j]&~32;
        }
        answer[i][strlen(strArr[i])] = '\0';
    }
    return answer;
}

int main() {
  const char* strArr[] = {"AAA","BBB","CCC","DDD"};
  char **answer = solution(strArr, sizeof(strArr)/sizeof(char*));
  for (int i=0; i<strlen(answer[0])+1; i++)
  {
      printf("%s\n", answer[i]);
  }
  return 0;
}