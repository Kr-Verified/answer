#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* myString) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(myString)+1));
    for (int i=0; i<strlen(myString); i++) {
        answer[i] = myString[i]=='a'||myString[i]=='A'?myString[i]&~32:myString[i]|32;
    }
    answer[strlen(myString)] = '\0';
    return answer;
}

int main() {
  printf("%s\n", solution("abstract algebra"));
  return 0;
}