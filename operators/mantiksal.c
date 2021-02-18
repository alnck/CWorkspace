#include <stdio.h>

int main()
{
    int a;
    int result;

    printf("a:");
    scanf("%d", &a);

    result = a > 10 && a < 20;
    printf("%d\n", result);

    return 0;
}