#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int N;
    printf("Введите трехзначное целое число N: ");
    scanf("%d", &N);
    if (N < 100 || N > 999) {
        printf("Ошибка: введите корректное трехзначное число.\n");
        return 1;
    }
    int last_digit = N % 10;
    int first_digit = N / 100;
    int sum_of_digits = first_digit + (N / 10 % 10) + last_digit;
    printf("Последняя цифра числа: %d\n", last_digit);
    printf("Первая цифра числа: %d\n", first_digit);
    printf("Сумма цифр числа: %d\n", sum_of_digits);
    return 0;
}
