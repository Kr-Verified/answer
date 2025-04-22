#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = malloc(sizeof(char*)*strArr_len);
    const char **p = strArr;
    char **q = answer;
    for (int i=0; i<strArr_len; i++, p++) {
        if (!strstr(*p, "ad")) *q++ = (char*)*p;
    }
    *q = NULL;
    return answer;
}

int main() {
  const char* strArr[] = {"and","notad","abcd"};
  char **answer = solution(strArr, 3);
  while (*answer) printf("%s\n", *answer++);
  return 0;
}