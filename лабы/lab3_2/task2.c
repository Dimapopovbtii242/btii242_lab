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

    // 2. ���������� ������������ ������� ��� �����
    puts("�������� ��� �����:");
    puts("1 - ���������� ����");
    puts("2 - ��������� ����");

    scanf("%d", &option);

    puts("������� �������� � ������:");
    scanf("%d", &dym);

    if (option == 1) {
        result = D_ENG * dym;
    }
    else if (option == 2) {
        result = D_SPA * dym;
    }
    else {
        puts("�������� �����. ��������� ����������.");
        return 1;
    }

    printf("%d ������ - ��� %.2f ��\n", dym, result);

    return 0;
}
