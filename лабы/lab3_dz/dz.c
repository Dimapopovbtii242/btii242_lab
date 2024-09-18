#include <locale.h>
#include <stdio.h>

#define LIGHT_YEAR_TO_AU 63241.1 

double convertLightYearsToAU(double lightYears) {
    return lightYears * LIGHT_YEAR_TO_AU;
}

int main() 
{
    setlocale(LC_ALL, "RUS");
    double lightYears;

    printf("������� ���������� �������� ���: ");
    scanf("%lf", &lightYears);

    double au = convertLightYearsToAU(lightYears);
    printf("%.2f �������� ��� = %.2f ��������������� ������\n", lightYears, au);

    return 0;
}
