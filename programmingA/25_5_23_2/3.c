#include <stdio.h>

int main() {
    char str[] = "Hello";
    char str2[10] = "";
    int i = 0;
    for (i = 0; str[i]!='\0'; i++) str2[i] = str[i];
    str2[i] = '\0';
    for (i = 0; str2[i]!='\0'; i++) printf("%c", str2[i]);
    return 0;
}