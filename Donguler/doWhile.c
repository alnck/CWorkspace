#include <stdio.h>
#include <conio.h>

int main(void)
{
    /*int i;

    i = 0;
    do
    {
        printf("%d\n", i);
        ++i;
    } while (i < 10);*/

    char ch;

    /*while (ch != 'e' && ch != 'h') //kontrolün başta olduğu while döngüsü
    {
        printf("(e)vet/(h)ayir?");
        ch = getch();
        printf("%c\n", ch);
    }
    
    if (ch == 'e')
        printf("evet secildi\n");
    else
        printf("hayir secildi\n");*/
    
    do
    {
        printf("(e)vet/(h)ayir?");
        ch = getch();
        printf("%c\n", ch);
    } while (ch != 'e' && ch != 'h');
    
    if(ch == 'e')
        printf("evet secildi");
    else
        printf("hayir secildi");
    
    return 0;
}