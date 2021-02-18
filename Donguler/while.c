#include <stdio.h>
#include <conio.h>

int mainvoid()
{
    /*int i = 0; //1.örnek
    while(i < 10)
    {
        printf("%d\n", i);
        ++i;
    }*/
    
    /*int i = 10; //2.örnek

    while (i)
    {
        printf("%d\n", i);
        --i;
    }*/
    
    /*char ch; // 3. örnek

    while((ch = getch()) != 'q')
        printf("%c", ch); */

    char ch;

    while (ch = getch(), ch != 'q')
        putchar(ch);
    putchar('\n');
    
    
    return 0;
}