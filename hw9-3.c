#include <stdio.h>

int main() {
    float A[3][2];
    float B[2][3];
    float C[3][3] = {0.0};
    
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    // Input Matrix B (2x3)
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    
    // Matrix Multiplication (A * B = C)
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            for (k = 0; k < 2; k++) { 
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The first matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.1f", A[i][j]); 
            if (j < 2 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.0f", B[i][j]); 
            if (j < 3 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Output Result Matrix C
    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.1f", C[i][j]); 
            if (j < 3 - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

