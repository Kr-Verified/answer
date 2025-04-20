#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* myString) {
    char* answer = (char*)malloc(sizeof(char)*strlen(myString));
    for (int i=0; i<strlen(myString); i++) {
        answer[i] = myString[i] < 90? myString[i]+32:myString[i];
    }
    answer[strlen(myString)] = '\0';
    return answer;
}

int main() {
  printf("%s\n", solution("aBcDeFg"));
  return 0;
}