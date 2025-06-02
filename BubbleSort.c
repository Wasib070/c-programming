#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of Array:\n");
    scanf("%d", &n);

    int X[n],j,i;

    printf("Enter array to be sorted: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    printf("Entered Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    // Bubble Sort algorithm
    for ( i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (X[j] > X[j + 1]) {
                int temp = X[j];
                X[j] = X[j + 1];
                X[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}
