#include <stdio.h>

#define SIZE 10

int main(void)
{
    int a[SIZE] = { 10, 4, 6, 34, 32, -34, 39, 21, 9, 22 };
    int i, max = a[0], min = a[0];

    for (i = 1; i < SIZE; i++)
    {
        if (a[i] > max )
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    int diff = max - min;
    printf("Diff = %d", diff);

    getchar();
    return 0;
}