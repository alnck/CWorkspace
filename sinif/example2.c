#include <stdio.h>

int main(void)
{
    char ch = getchar();
    

    if( ch == 'a')
        printf("ali\n");
    else if (ch == 'b')
        printf("burhan\n");
    else if( ch == 'c')
        printf("cemal\n");
    else if(ch == 'd')
        printf("demir\n");
    else
    {
        printf("hiçbiri");
    }
    
    return 0;
}