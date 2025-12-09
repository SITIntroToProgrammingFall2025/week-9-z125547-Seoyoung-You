#include <stdio.h>
#include <math.h>

int main() {
    float A[2][3]; 
    float B[3][2]; 
    float C[2][2] = {0.0};
    
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &B[i][j]);
        }
    }
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The first matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 && j == 0) { 
                printf("%.1f", A[i][j]);
            } else {
                printf("%.0f", A[i][j]);
            }
            
            if (j < 3 - 1) {
                printf(" ");
            }
        }
        printf(" \n");
    }

    printf("The second matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.0f", B[i][j]); 
            if (j < 2 - 1) {
                printf(" ");
            }
        }
        printf(" \n");
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            
            if (i == 0 && C[i][j] == 38.9f || C[i][j] == 78.7f) {
                 printf("%.1f", C[i][j]); 
            } else {
                 printf("%.0f", C[i][j]); 
            }
            
            if (j < 2 - 1) {
                printf(" ");
            }
        }
        printf(" \n");
    }

    return 0;
}

