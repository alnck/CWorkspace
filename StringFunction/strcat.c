#include <stdio.h>
#include <string.h>

/*int main(void)
{
    char s[32] = "ankara";
    char d[32] = "izmir";

    strcat(d, s);
    printf("%s\n", d);
    getchar();

    return 0;
}*/

char *mystrcat(char *dest, char *source)
{
    int i, k;

    for (i = 0; dest[i] != '\0'; ++i)
    ;
    for (k = 0; (dest[k + i] = source[k]) != '\0'; ++k)
    ;

    return dest;
}

int main(void)
{
    char s[32] = "ankara";
    char d[32] = "izmir";

    mystrcat(d, s);
    printf("%s\n", d);

    return 0;
}
