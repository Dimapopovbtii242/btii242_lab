#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;

    x = a / b; 
    y = a / b; 
    z = a / b; 

    printf("Значение x (int): %d\n", x);
    printf("Значение y (float): %.2f\n", y);
    printf("Значение z (double): %.6f\n", z);

    printf("Результат a/b к float: %.2f\n", (float)a / b);
    printf("Результат a/b к double: %.6f\n", (double)a / b);

    printf("Результат (float)a / b: %.2f\n", (float)a / b); 
    printf("Результат a / (float)b: %.2f\n", a / (float)b); 

    printf("Результат (double)a / b: %.6f\n", (double)a / b);
    printf("Результат a / (double)b: %.6f\n", a / (double)b); 

    return 0;
}
