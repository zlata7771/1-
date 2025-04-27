#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int sign = ((a > 0) - (a < 0)) * ((b > 0) - (b < 0)) * ((c > 0) - (c < 0));
    sign = (a == 0||b == 0||c == 0) ? 0 : sign;
    
    printf("%d\n", sign);
    return 0;
}
