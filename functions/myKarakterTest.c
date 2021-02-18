#include <stdio.h>

int myisupper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    return 0;
}

int myislower(char ch)
{
    if(ch >= 'a' && ch <= 'z')
        return 1;
    return 0;
}

int myisalpha(char ch)
{
    if(myisupper(ch) || myislower(ch))
        return 1;
    return 0;
}

int main(void)
{
    char ch;

    printf("Karakter:");
    ch = getchar();
    if (myisalpha(ch))
        printf("alfabetik\n");
    else
        printf("alfabetik degil\n");

    return 0;
}