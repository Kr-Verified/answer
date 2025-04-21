#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int solution(const char* myString, const char* pat) {
    int answer = 0;
    for (int i=0; i<strlen(myString)-strlen(pat)+1; i++) {
        bool check = true;
        for (int j=0; j<strlen(pat); j++) {
            if (myString[i+j]!=pat[j])
            {
                check = false;
                break;
            }
            printf ("%c %c %d\n", myString[i+j], pat[j], i+j);
        }
        if (check) answer++;
        printf("%d\n", i);
    }
    return answer;
}

int main() {
  printf("%d\n", solution("banana", "ana"));
  return 0;
}