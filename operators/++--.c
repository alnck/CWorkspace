#include <stdio.h>

int main()
{
    int a;

    a = 3;
    ++a; // a = a + 1
    printf("%d\n", a--); /* 4 */
    printf("%d\n", a); /* 3 */

    a = 3;
    --a;
    printf("%d\n", a); /* 2 */

    return 0;
}