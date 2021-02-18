#include <stdio.h>
#include <math.h>

int main()
{
    double val;
    double result;

    printf("lutfen bir sayi giriniz:");
    scanf("%lf", &val);


    result = sqrt(val); //sqrt kare kök alma fonksiyonu
    printf("%f\n", result);

    return 0;
}