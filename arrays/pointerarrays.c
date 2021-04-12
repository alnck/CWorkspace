#include <stdio.h>
#include <string.h>

int main(void)
{
    char *names[] = {"ali", "veli", "selami", "siracettin", "ayse", "fatma", NULL};
    char s[100];
    int i;
    int k = 0;

    for (i = 0; names[i] != NULL; ++i) {
        s[k] = names[i];
        ++k;
        s[k] = ',';
        ++k;
    }
    if (names[i] == NULL) {
        s[k] = "";
    }
    
    puts(s);

    getchar();
    return 0;
}