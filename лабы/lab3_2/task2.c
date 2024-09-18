#include <locale.h>
#include <stdio.h>

#define D_ENG 2.54       
#define D_SPA 2.7      

int main() 
{
    setlocale(LC_ALL, "RUS");
    int dym;
    float result;
    int option;

    // 2. Предлагаем пользователю выбрать тип дюйма
    puts("Выберите тип дюйма:");
    puts("1 - Английский дюйм");
    puts("2 - Испанский дюйм");

    scanf("%d", &option);

    puts("Введите значение в дюймах:");
    scanf("%d", &dym);

    if (option == 1) {
        result = D_ENG * dym;
    }
    else if (option == 2) {
        result = D_SPA * dym;
    }
    else {
        puts("Неверный выбор. Программа завершится.");
        return 1;
    }

    printf("%d дюймов - это %.2f см\n", dym, result);

    return 0;
}
