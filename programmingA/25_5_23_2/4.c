#include <stdio.h>

int main() {
    char str[100];
    char str2[100];
    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);
    char str3[100];
    int cnt=0;
    for (int i = 0; str[i]!='\n'; i++) str3[cnt++] = str[i];
    for (int i = 0; str2[i]!='\n'; i++) str3[cnt++] = str2[i];
    for (int i = 0; str3[i]!='\0'; i++) printf("%c", str3[i]);
    return 0;
}