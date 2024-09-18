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

    printf("Введите количество световых лет: ");
    scanf("%lf", &lightYears);

    double au = convertLightYearsToAU(lightYears);
    printf("%.2f световых лет = %.2f астрономических единиц\n", lightYears, au);

    return 0;
}
