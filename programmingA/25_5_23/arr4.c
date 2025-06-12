#include <stdio.h>

int main() {
    int matrix[3][3] = {{0}};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            if ((2-i)==j) sum+=matrix[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}