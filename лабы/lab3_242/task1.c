#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int num1, num2;
    puts("Введите первое число:");
    scanf("%d", &num1);
    printf("Введено число %d\n", num1);
    puts("Введите второе число:");
    scanf("%d", &num2);
    int sum = num1 + num2;
    int difference = num2 - num1;
    int product = num1 * num2;
    float quotient = (float)num2 / num1;
    int remainder = num2 % num1;
    printf("Сумма: %d\n", sum);
    printf("Разность: %d\n", difference);
    printf("Произведение: %d\n", product);
    printf("Частное: %.2f\n", quotient);
    printf("Остаток от деления: %d\n", remainder);

    return 0;
}
