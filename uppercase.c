#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* myString) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(myString)+1));
    for (int i=0; i<strlen(myString); i++) {
        answer[i] = myString[i]>90?myString[i]-32:myString[i];
    }
    answer[strlen(myString)] = '\0';
    return answer;
}

int main() {
  printf("%s\n", solution("aBcDeFg"));
  return 0;
}