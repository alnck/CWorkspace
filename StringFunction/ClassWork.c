#include <stdio.h>
#include <string.h>

char *mystrcat(char *desk, char *str)
{
    int i, d;
    for (i = 0; desk[i] != '\0'; ++i)
    ;
    for (d = 0; (desk[d +i] = str[d]) != '\0'; ++d)
    ;

    return desk;
}


int main(void)
{
    char s[1000] = "ankara";
    char k[32];
    int count = 0;
    int comp = 0;
    
    for (int i = 1; i > 0 ;)
    {
        printf("Dizi elemani veya elemanlarini giriniz :");
        gets(k);

        for (int j = 0; k[j] != '\0'; ++j)
        {
            ++count;
        }
        
        for (; comp == count;)
        {
            i = 0;
            break;
        }
        
        comp = count;
    }
    
    mystrcat(s, k);
    puts(s);

    getchar();
    return 0;
}