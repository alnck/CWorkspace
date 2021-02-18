#include <stdio.h>

int main()
{
    int a, b, c;

    printf("hangi aydasiniz:");
    scanf("%d",&a);
    printf("hangi yildasiniz:");
    scanf("%d", &b);
    printf("hangi gundesiniz:");
    scanf("%d", &c);
    printf("%d", c);

    switch (a)
    {
    case 1:
        printf("-Ocak");
        break;
    case 2:
        printf("-Subat");
        break;
    case 3:
        printf("-Mart");
        break;
    case 4:
        printf("-Nisan");
        break;
    case 5:
        printf("-Mayis");
        break;
    case 6:
        printf("-Haziran");
        break;
    case 7:
        printf("-Temmuz");
        break;
    default:
        printf("-Son 5 ay :)");
        break;
    }
    printf("-%d", b);
    return 0;
}