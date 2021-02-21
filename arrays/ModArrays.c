#include <stdio.h>
#define SIZE 10

int main(void)
{
    int a[SIZE] =  { 3, 7, 3, 6, 6, 8, 7, 8, 6, 4 };
    int i,k, mod;
    int Total = 0;
    int LastTotal = 0;

    for (i = 0; i < SIZE; i++)
    {
        Total = 0;
        
        for (k = 0; k < SIZE; k++)
        {
            if (a[i] == a[k])
            {
                Total += 1;
            }

            if (Total > LastTotal)
            {
            LastTotal = Total;
            mod = a[i];
            printf("Mod = %d\n", mod);
            }
        }
    
    }

    printf("Arrays Mod = %d", mod);

    getchar();
    return 0;
}