#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(const char* binomial) {
    char *copy = strdup(binomial);
    int a = atoi(strtok(copy, " ")), answer;
    char op = strtok(NULL, " ")[0];
    int b = atoi(strtok(NULL, " "));
    
    if (op=='+') answer = a+b;
    else if (op=='-') answer = a-b;
    else if (op=='*') answer = a*b;
    
    return answer;
}

int main() {
  const char* binomial = "10 + 20";
  printf("%d\n", solution(binomial));
}