#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* myString, const char* pat) {
    int cnt;
    for (cnt = strlen(myString)-strlen(pat); cnt>=0; cnt--) {
        bool check = true;
        for (int j=0; j<strlen(pat); j++) {
            if (myString[cnt+j]!=pat[j]) check = false;
        }
        if (check) break;
    }
    cnt += strlen(pat);
    char* answer = (char*)malloc(sizeof(char)*(cnt+1));
    for (int i=0; i<cnt; i++)
    {
        answer[i] = myString[i];
    }
    answer[cnt] = '\0';
    return answer;
}

int main() {
  printf("%s\n", solution("AbCdEFG", "dE"));
  return 0;
}