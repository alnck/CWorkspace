#include <stdio.h>

void rev_array(int *pi, int size)
{
    int k = size-1;
   

    for (; k > size/2 - 1; k--)
    {
        int temp = pi[size - k - 1];
        pi[size - k - 1] = pi[k];
        pi[k] = temp;
    }
     
}

void disp_array(int *pi, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", pi[i]);
    }
}

int main()
{
    int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
   
    
    rev_array(a, 10);
    disp_array(a, 10);
    
    getchar();
    return 0;
}