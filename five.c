#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* names[], size_t names_len) {
    char** answer = (char**)malloc(sizeof(char*)*(names_len/5));
    for (int i=0; i<(names_len+4)/5; i++) {
        answer[i] = (char*)malloc(sizeof(char)*(strlen(names[i])+1));
        strcpy(answer[i], names[i*5]);
    }
    return answer;
}

int main() {
  const char *names[] = {"nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"};
  char **answer = solution(names, 7);
  for (int i=0; i<sizeof(answer)/sizeof(answer[0])+1; i++) printf("%s\n", answer[i]);
}