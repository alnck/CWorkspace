#include <stdio.h>
#include <math.h>

int main(void)
{
   /* int a; //1.örnek
    printf("bir sayi giriniz:");
    scanf("%d", &a);

    if (a > 0)
        printf("pozitif\n");
    else
        printf("negatif yada sifir\n");*/

    /*double a,b,c; //2.örnek
    double delta;

    printf("a:");
    scanf("%lf", &a);

    printf("b:");
    scanf("%lf", &b);

    printf("c:");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;
    if(delta < 0)
        printf("kok yok!\n");
    else
    {
        double x1, x2;

        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("x1 = %f, x2 = %f", x1, x2);
    }*/
    
    int a;

    printf("bir sayi giriniz:");
    scanf("%d", &a);

    if (a < 0)
        printf("pozitif\n");
    printf("spn\n");

    return 0;
}