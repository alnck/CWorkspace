#include <stdio.h>

double foo(void)
{
    printf("Im am foo\n");
    return 1500.2;
}

int main(void)
{
    int n;
    n = sizeof(foo());

    printf("%d\n", n);

    getchar();
    return 0;
}