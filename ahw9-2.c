#include <stdio.h>

int main() {
    int arr[ARRAY_SIZE];
    int i, j;     
    int temp;       

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    for (i = 0; i < ARRAY_SIZE - 1; i++) {
        for (j = 0; j < ARRAY_SIZE - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("sorted array:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d", arr[i]);
        if (i < ARRAY_SIZE - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

