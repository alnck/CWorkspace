#include <stdio.h>

 main()
{
    double a, b;
    
    printf("a ve b için değer giriniz:");
    scanf("%lf%lf", &a, &b);
    printf("a = %f, b = %f\n", a, b);

    double c = a + b;
    printf("c = %f", c);
}