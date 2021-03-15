#include <stdio.h>

/*int main()
{
    int a = 100;
    int *pi;

    pi = &a;
    printf("%d\n", *pi);
    *pi = 150;
    printf("%d\n", a);

    getchar();
    return 0;
}*/

/*int main()
{
    char ch;
    char *pc;

    pc = &ch;
    *pc = 'x';
    putchar(ch);

    getchar();
    return 0;
}*/

int main()
{
    int a[3]= { 10, 20, 30};
    int *pi;

    pi = a;
    *pi = 100;

    printf("%d\n", a[0]);

    getchar();
    return 0;
}