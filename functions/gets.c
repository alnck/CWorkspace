#include <stdio.h>

int main(void)
{
    char s[100];
    int i;

    gets(s);

    for (i = 0; s[i] != '\0'; ++i)
    {
        putchar(s[i]);
        putchar('\n');
    }

getchar();
return 0;
}
