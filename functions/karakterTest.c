#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
    char ch;

    while((ch = getch()) != 'q')
    {
        printf("%c\n", ch);
        if(isupper(ch))
            printf("buyuk harf\n");
        else if(islower(ch))
            printf("kucuk harf\n");
        else if(isdigit(ch))
            printf("digit karakter\n");
        else if(isspace(ch))
            printf("bosluk karakterlerinden biri\n");
        else if(ispunct(ch))
            printf("noktalama karakterlerinden biri\n");
        else
            printf("diger bir karakter\n");        
    }

    return 0;
}