#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("Переменные:\n");
    printf("c = %c\n", c);
    printf("i = %d\n", i);
    printf("f = %.2f\n", f);
    printf("d = %.2e\n", d);
    printf("Введите символ: ");
    scanf(" %c", &c);
    printf("Введите целое число: ");
    scanf("%d", &i);
    printf("Введите вещественное число: ");
    scanf("%f", &f);
    printf("Введите другое вещественное число: ");
    scanf("%lf", &d);

    printf("Целая часть f: %d\n", (int)f);
    printf("Дробная часть f: %.2f\n", f - (int)f);

    printf("Десятичный код символа cимвола: %d\n", c);
    printf("Шестнадцатеричный код символа cимвола: %x\n", c);

    if (i != 0) {
        printf("1 / i = %.2f\n", 1.0 / i);
    }
    else 
    {
        printf("Ошибка: деление на ноль.\n");
    }

    return 0;
}
