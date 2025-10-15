#include <stdio.h>

int main() {
    double array[10];
    float sum = 0;

    
    for (int i = 0; i < 10; ++i) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }

    
    float average = sum / 10;

    
    printf("%f\n", average);
    
    return 0;
}