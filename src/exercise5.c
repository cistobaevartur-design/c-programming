#include <stdio.h>

int main() {
    int A[10][3], B[3][10], C[10][10];

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 3; ++j)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 10; ++j)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < 3; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            printf("%d ", C[i][j]);

    printf("\n");
    return 0;
}
