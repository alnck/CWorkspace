#include <stdio.h>

int main()
{
    int a = 20, b;

    /*b = (a > 2) + 1;
    printf("%d\n", b);*/

    /*b = a++ == 3;
    printf("a = %d, b = %d\n", a, b);*/

    b = 0 < a < 10;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}