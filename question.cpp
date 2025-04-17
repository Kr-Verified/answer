#include <stdio.h>

int main(void) {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int max = 0;
    for (int i = 1; i < 3; i++)
        if (a[max] < a[i]) max = i;
    if (a[max]<a[(max+1)%3]+a[(max+2)%3]) {
        printf("yes\n");
    }else {
        printf("no\n");
    }
}