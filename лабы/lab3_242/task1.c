#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int num1, num2;
    puts("������� ������ �����:");
    scanf("%d", &num1);
    printf("������� ����� %d\n", num1);
    puts("������� ������ �����:");
    scanf("%d", &num2);
    int sum = num1 + num2;
    int difference = num2 - num1;
    int product = num1 * num2;
    float quotient = (float)num2 / num1;
    int remainder = num2 % num1;
    printf("�����: %d\n", sum);
    printf("��������: %d\n", difference);
    printf("������������: %d\n", product);
    printf("�������: %.2f\n", quotient);
    printf("������� �� �������: %d\n", remainder);

    return 0;
}
