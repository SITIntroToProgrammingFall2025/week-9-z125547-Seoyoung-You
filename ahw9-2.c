#include <stdio.h>

int main() {
    int arr[5];
    int i, j;
    int temp;

    for (i = 0; i < 5; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 5 - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}


