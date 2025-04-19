#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
    char** answer = (char**)malloc(sizeof(char*)*finished_len);
    int cnt = 0;
    for (int i=0; i<finished_len; i++) {
        if (!finished[i]) answer[cnt++] = todo_list[i];
    }
    return answer;
}

int main() {
  const char* todo_list[] = {"problemsolving", "practiceguitar", "swim", "studygraph"};
  bool finished[] = {true, false, false, true};
  char** answer = solution(todo_list, 4, finished, 4);
  for (int i=0; i<4; i++) {
    printf("%s\n", answer[i]);
  }
}