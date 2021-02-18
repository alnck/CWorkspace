#include <stdio.h>

void foo(int a, int b)
{
    printf("a = %d, b = %d\n", a, b);
}

int main()
{
    int x = 10, y = 20;

    foo(x, y); //10,20
    foo(x+10, y+20); //20,40
    foo(100,200); //100,200

    return 0;
}