#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    float X, S, L;
    printf("������� ��������� ������ ��������� ����� �������� ����� (X): ");
    scanf("%f", &X);
    printf("������� ����� ������� ������� (S) � �?: ");
    scanf("%f", &S);
    printf("������� ������ ����� � ������ (L) � ��: ");
    scanf("%f", &L);
    float sh = L / 100.0;
    float dl = S / sh;
    float st = dl * X;
    printf("���� �������� %.2f ������� �� �����.\n", st);

    return 0;
}
