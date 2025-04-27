#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(const char* myString, const char* pat) {
    for (int i=0; i<strlen(myString)-strlen(pat)+2; i++) {
        int answer = 0;
        for (int j=0; j<strlen(pat); j++) {
            if (!(myString[i+j]-'A')!=pat[j]-'A') {
                answer = 1;
                break;
            }
        }
        if (!answer) return 1;
    }
    return 0;
}

int main() {
  const char* myString = "ABBAA";
  const char* pat = "AABB";
  printf("%d\n", solution(myString, pat));
  return 0;
}