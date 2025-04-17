#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* str_list[], size_t str_list_len) {
    char** answer = (char**)malloc(sizeof(char*)*(str_list_len+1));
    int left=0, right=str_list_len-1;
    for (int i=0; i<str_list_len; i++) {
        if (strcmp(str_list[i], "l")==0) {
            right = i-1;
            break;
        }else if (strcmp(str_list[i], "r")==0) {
            left = i+1;
            break;
        }
    }
    
    for (int i=0; i<right-left+1; i++) answer[i] = strdup(str_list[i + left]);
    return answer;
}

int main(void) {
  const char* str_list[4] = {"u", "u", "l", "r"};
  char **result = solution(str_list, 4);
  while (*result) printf("%s\n", *result++);
}