#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Karakter giriniz:");
    ch = getchar();
    ch = toupper(ch);
    printf("½c\n", ch);

    return 0;
}