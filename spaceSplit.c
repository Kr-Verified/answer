#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** solution(const char* my_string) {
  int check = 0, cnt = 0;
  for(int i=0; i<strlen(my_string); i++) {
    if (my_string[i]==' ' && check) {
      cnt++;
      check = 0;
    }
    check++;
  }
  char **answer = (char**)malloc(sizeof(char*)*cnt);
  char *copy = strdup(my_string);
  char *temp = strtok(copy, " ");
  check = 0;

  while (temp!=NULL) {
    answer[check++] = temp;
    temp = strtok(NULL, " ");
  }

  return answer;
}

int main()
{
  const char* myString = " i    love  you";
  char** answer = solution(myString);
  for (int i=0; i<strlen(answer); i++)
  {
    printf("%s\n", answer[i]);
  }
  return 0;
}