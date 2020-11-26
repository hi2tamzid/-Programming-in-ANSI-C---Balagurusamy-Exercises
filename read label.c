#include <stdio.h>

int main()
{
    double x, y ;
    l:
        printf("hello1\n") ;
        printf("hello2\n") ;
        printf("hello3\n") ;
        printf("hello4\n") ;
        read:
        printf("hello5\n") ;
        printf("hello5\n") ;

        goto read;

    return 0 ;
}
