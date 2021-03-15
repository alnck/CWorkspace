#include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    int *pi;

    pi=a;

    printf("%d\n", *pi);
    ++pi;
    printf("%d\n", *pi);
    ++pi;
    printf("%d\n", *pi);

    getchar();
    return 0;
}