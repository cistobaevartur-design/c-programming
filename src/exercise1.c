#include <stdio.h>

int main() {
    float array[10];
    float sum = 0.0;

    
    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
        sum += array[i];
    }

    
    float average = sum / 10;

    
    printf("%.2f\n", average);
    
    return 0;
}