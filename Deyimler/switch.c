/*#include <stdio.h>

int main()
{
    int a;

    printf("Bir sayi giriniz:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("bir\n");
        break;
    case 2:
        printf("iki\n");
        break;
    case 3:
        printf("uç\n");
        break;
    case 4:
        printf("dort\n");
        break;
    default:
        printf("hicbiri\n");
        break;
    }
    printf("son\n");
    return 0;
}*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    for (;;)
    {
        printf("CSD>");
        ch = getch();
        printf("%c\n", ch);
        if (ch == 'q')
        {
            break;
        }
        switch (ch)
        {
        case 'r':
        case 'd':
            printf("delete command\n");
            break;
        case 'c':
            printf("copy command\n");
            break;
        case 'm':
            printf("move command\n");
            break;
        default:
            break;
        }
    }
    return 0;
    
}