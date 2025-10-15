#include <stdio.h>

int main(int argc, char** argv) {
    float array[10], result[10];
    int K;


    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    scanf("%d", &K);

    K %= 10; 
    if (K < 0)
        K += 10;
    for (int i = 0; i < 10; ++i) {
        result[(i + K) % 10] = array[i];
    }

    
    for (int i = 0; i < 10; ++i) {
        printf("%.f ", result[i]);
    }
    printf("\n");

    return 0;
}
