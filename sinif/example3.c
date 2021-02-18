#include <stdio.h>

int main(void)
{
    int n, i, a;
    printf("bir sayi giriniz :");
    scanf("%d", &n);

    
    for(a = 1; a <= n; ++a)
    {
        for(i = 1; i <= a; ++i)
        {
            printf("*");
        }

        printf("\n");
    }   

    return 0;
}