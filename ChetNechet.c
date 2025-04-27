#include <stdio.h>

int main() {
    int num;
    printf("Целое число: ");
    scanf("%d", &num);
    char *result[] = {"Чет", "Нечет"};
    printf("%s\n", result[num % 2]);
    return 0;
}
