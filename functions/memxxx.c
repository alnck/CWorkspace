#include <stdio.h>
#include <string.h>

/*int main(void) //memcpy
{
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int b[10];
    int i;
    
    memcpy(b, a, 10 * sizeof(int));
    for (i = 0; i < 10; ++i)
        printf("%d ", b[i]);
    printf("\n");

    getchar();
    return 0;
}*/

int main(void)
{
    /*int a[10];
    int i;
    
    memset(a, 0, 10 * sizeof(int)); 
    for (i = 0; i < 10; ++i)
        printf("%d ", a[i]); 
    printf("\n");*/
    
    char s[200];

    memset(s, 'a', 199);
    s[199] = '\0';
    printf("%s\n", s);

    getchar();
    return 0;
}