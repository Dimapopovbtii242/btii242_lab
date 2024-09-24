#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    int n;
    printf("���� �����: ");
    scanf("%d", &n);
    if (n < 100 || n > 999) {
        printf("������: ������� ���������� ����������� �����.\n");
        return 1;
    }
    int last_digit = n % 10; 
    int second_digit = (n / 10) % 10;
    int first_digit = n / 100; 
    printf("����� ����� � �������� �������: %d%d%d\n", last_digit, second_digit, first_digit);
    return 0;
}
