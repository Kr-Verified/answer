#include <stdio.h>
#include <string.h>

int solution(const char* my_string, const char* target) {
    return strstr(my_string,target)!=NULL;
}
int main(void) {
  printf("%d\n", solution("banana", "ana"));
}