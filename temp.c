#include <stdio.h>

int main() {
    float celsius;
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("C = %.0f ; F = %.2f\n", celsius, fahrenheit);
    return 0;
}
