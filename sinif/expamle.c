#include <stdio.h>

int main()
{
    int n, i;

    printf("bir sayi giriniz :");
    scanf("%d", &n);

    asal(n);

    return 0;
}

int asal(int number)
{
    int i;
    int isWriter = 0;

    for(i = 1; i <= number; ++i)
    {
        if(number % i == 0)
        {
            if (isWriter)
            {
                printf(", ");
            }
            
            printf("%d", i);
            isWriter = 1;
        }
    }

    return 0;
}