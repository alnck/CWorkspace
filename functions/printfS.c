#include <stdio.h>

int main(void)
{
    char s[100];

    printf("Yazi giriniz:");
    gets(s);

    printf("Girilen yazi: %s\n");

    getchar();
    return 0;
}