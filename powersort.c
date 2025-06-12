#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int start, length;
    int power;
} Run;

#define MAX_RUNS 128

int floor_log2(int x) {
    int r = 0;
    while (x >>= 1) r++;
    return r;
}

int calculate_power(int a, int b, int n) {
    double z = (double)(a + b) / n;
    return floor_log2((int)(1.0 / z));
}

void merge(int arr[], int start, int mid, int end) {
    int n1 = mid - start;
    int n2 = end - mid;
    int *left = malloc(n1 * sizeof(int));
    int *right = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) left[i] = arr[start + i];
    for (int i = 0; i < n2; i++) right[i] = arr[mid + i];

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
        arr[k++] = (left[i] <= right[j]) ? left[i++] : right[j++];

    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];

    free(left);
    free(right);
}

void powersort(int arr[], int n) {
    Run run_stack[MAX_RUNS];
    int top = -1;

    // Step 1: Find runs (here we detect strictly increasing sequences)
    int i = 0;
    while (i < n) {
        int start = i;
        while (i + 1 < n && arr[i] <= arr[i + 1]) i++;
        int length = i - start + 1;

        int power = calculate_power(start, length, n);

        Run new_run = {start, length, power};

        // Step 2: Merge according to power values
        while (top >= 0 && run_stack[top].power >= power) {
            Run prev = run_stack[top--];
            merge(arr, prev.start, prev.start + prev.length, start + length);
            start = prev.start;
            length = (start + length) - prev.start;
            power = calculate_power(start, length, n);
        }

        run_stack[++top] = (Run){start, length, power};
        i++;
    }

    // Final merge
    while (top > 0) {
        Run r2 = run_stack[top--];
        Run r1 = run_stack[top];
        merge(arr, r1.start, r1.start + r1.length, r2.start + r2.length);
        run_stack[top] = (Run){r1.start, r1.length + r2.length, 0};  // Power doesn't matter now
    }
}
int main() {
    int arr[] = {5, 3, 1, 4, 2, 6, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    powersort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
