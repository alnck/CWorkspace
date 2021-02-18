#include <stdio.h>

/*int main()
{
   /* int a=10, b=20;

printf("a = %d, b = %d\n", a, b);
printf("a = %d, b = %d\n", b, a);
printf("%d%d\n", a, b);*/

/*double f = 12.3;
int a = 123;

printf("%-10d%f\n", a, f);*/

/*int i;

for (i = 1; i <= 100; ++i)
{
    printf("%-10d%d\n", i, i *i);
}


return 0;
}*/

#include <stdio.h>

int main() 
{ double d; 
d = 12345.6789;
 printf("%10.2f\n", d); /* 12345.68 */

printf("%4.2f\n", d); /*12345.68 */
d = 12.78; 
printf("%.0f\n", d);
return 0; }