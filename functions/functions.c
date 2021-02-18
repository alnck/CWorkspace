#include <stdio.h>

main()
{
    int result = foo()*2;
    printf("sonuc = %d", result);
} 

int foo()
{
    printf("Foo\n");
    return 100;
    printf("test\n"); 
}
