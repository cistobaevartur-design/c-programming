#include <stdio.h>
#include <math.h>

int main() {
    float array[10];
    float sum = 0.0;

    // Ввод данных
    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
        sum += array[i];
    }

    // Вычисление среднего значения и округление
    float average = sum / 10;
    average = roundf(average * 100) / 100;

    // Вывод результата
    printf("%.2f\n", average);
    
    return 0;
}