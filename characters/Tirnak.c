#include <stdio.h>

int main()
{
    char ch = '\'';

    printf("%c\n", ch);
    printf("Türkiye'nin baskenti Ankara'dir\n"); /*geçerli*/
    printf("Türkiye\'nin baskenti Ankara\'dir\n");

    return 0;
}