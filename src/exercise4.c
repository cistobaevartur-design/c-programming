#include <stdio.h>

int main(int argc, char** argv) {
    float array[10], X;
    int K;

    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }

    scanf("%f", &X);
    scanf("%d", &K);

    for (int i = 9; i > K; --i) {
        array[i] = array[i - 1];
    }
    array[K] = X;

    for (int i = 0; i < 10; ++i) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    return 0;
}
