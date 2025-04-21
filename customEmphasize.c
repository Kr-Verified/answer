#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* my_string, const char* alp) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)+1));
    for (int i=0; i<strlen(my_string); i++) {
        answer[i] = my_string[i]==alp[0]?my_string[i]&~32:my_string[i];
    }
    answer[strlen(my_string)] = '\0';
    return answer;
}

int main() {
  printf("%s\n", solution("programmers", "p"));
  return 0;
}