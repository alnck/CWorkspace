#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    srand(time(0));
    for(;;)
    {
    int a = getch();
    if (a == 'q')
    {
        return 0;
    }
    
    writeRaundName();
    }
    
    return 0;
}


writeRaundName()
{
     int a = rand() % 5;  

switch (a)
    {
    case 1:
        printf("Ayse\n");
        break;
    case 2:
        printf("Veli\n");
        break;
    case 3:
        printf("Selami\n");
        break;
    case 4:
        printf("Fatma\n");
        break;
    case 5:
        printf("Ali\n");
        break;
    }

    return 0;
}

