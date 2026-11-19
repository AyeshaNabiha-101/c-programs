#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // 1. Get dimensions for both matrices
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // 2. Check if multiplication is mathematically possible
    if (c1 != r2) {
        printf("\nError: Columns of the first matrix must equal rows of the second matrix.\n");
        return 1; // Exit the program
    }

    int matrixA[r1][c1], matrixB[r2][c2], product[r1][c2];

    // 3. Input elements for the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // 4. Input elements for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // 5. Multiply the matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0; // Initialize the cell before adding products
            for (int k = 0; k < c1; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // 6. Display the resulting product matrix
    printf("\nProduct of the two matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
