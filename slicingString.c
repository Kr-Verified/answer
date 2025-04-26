#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char**)a, *(const char**)b);
}
char** solution(const char* myString) {
    char** answer = (char**)malloc(sizeof(char*));
    int pos = 0;
    const char *start = myString;
    for (const char *p = myString;*p;p++) {
        if (*p=='x') {
            int len = p-start;
            if (len>0) {
                answer = (char**)realloc(answer, sizeof(char*)*(pos+2));
                answer[pos] = (char*)malloc(sizeof(char)*(len+1));
                strncpy(answer[pos], start, len);
                answer[pos][len] = '\0';
                pos++;
            }
            start = p+1;
        }
    }
    int len = strlen(start);
    if (len>0) {
        answer = (char**)realloc(answer, sizeof(char*)*(pos+2));
        answer[pos] = (char*)malloc(sizeof(char)*(len+1));
        strncpy(answer[pos], start, len);
        answer[pos++][len] = '\0';
    }
    
    qsort(answer, pos, sizeof(char*), compare);
    return answer;
}

int main() {
  const char* myString = "axbxcxdx";
  char** answer = solution(myString);
  while (*answer) {
    printf("%s\n", *answer++);
  }
  return 0;
}