#include <stdio.h>
#include <math.h>

/*int isprime(int val) 
{ 
    int i, result;

    result = 1; 
    for (i = 2; i < val; ++i)
        if (val % i == 0) {
            result = 0; 
            break; 
        }
    printf("(val = %d, i = %d)", val, i);
    return result; 
}

int main(void) 
{
    int i;
    for (i = 2; i < 10; ++i) 
        if (isprime(i)) 
            printf("-asal sayi = %d ", i); 
    printf("\n");

    return 0;
}*/

int isprime( int val)
{
    int i, result;
    double n;

    if (val % 2 == 0)
        return val == 2;
    
    n = sqrt(val);
    printf("n =%d\n", n);
    result = 1;
    for(i = 3; i <= n; i += 2)
        if(val % i == 0){
            result = 0;
            break;
        }

        return result;
}

int main(void)
{
    int i;

    for(i = 2; i < 1000; ++i)
        if(isprime(i))
            printf("%d ", i);
    printf("\n");

    return 0;
}