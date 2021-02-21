#include <stdio.h>

int main(void)
{
    char s[100];
    char temp;
    int total = 0;

    printf("Ters Çevrilecek Metin: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        ++total;
    }

    int a = total -1;
    for (int i = 0; i < a; i++)
    {
        temp = s[i];
        s[i] = s[a];
        s[a] = temp;
        --a;
    }
    puts(s);

    getchar();
    return 0;
}