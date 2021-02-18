#include <stdio.h>

main()
{
    int a;
    {
        int b;

        b = 20;
        a = 10;
        printf("a = %d, b = %d\n", a, b);
    }
    printf("a = %d\n", a);
    //printf("b = %d\n", b); //error

    return 0;
}