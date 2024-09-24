#include <locale.h>
#include <stdio.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    float X, S, L;
    printf("¬ведите стоимость одного погонного метра красного шелка (X): ");
    scanf("%f", &X);
    printf("¬ведите общую площадь парусов (S) в м?: ");
    scanf("%f", &S);
    printf("¬ведите ширину ткани в рулоне (L) в см: ");
    scanf("%f", &L);
    float sh = L / 100.0;
    float dl = S / sh;
    float st = dl * X;
    printf("√рей заплатил %.2f золотых за ткань.\n", st);

    return 0;
}
