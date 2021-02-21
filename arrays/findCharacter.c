#include <stdio.h>

int main()
{
    char s[100];
    
    printf("Bir Metin Giriniz:");
    gets(s);

    printf("Bir Karakter Giriniz:");
    char temp = getchar();

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("test");
        if (temp == s[i])
        {
            ++count;
        }
    }
    
    printf("%c Karakterinden %d adet vardır", temp, count);

    getchar();
    return 0;
}