#include <stdio.h>

int main()
{
    char s[100];
    int i, total = 0;

    gets(s);

    for (i = 0; s[i] != '\0'; i++)
    {
        total++;
    }
    printf("%d", total);

    getchar();
    return 0;
}