#include <stdio.h>

int main()
{
    char a[]  = "CProgramming" ;
    int c, d ;
    printf("\n\n") ;
    printf("----------\n") ;

    for(c = 0 ; c <= 11 ; c++)
    {
        printf("%-*s\n", c + 1, a) ;
    }

    printf("----------\n") ;

    for(c = 11 ; c >= 0 ; c--)
    {
        d = c + 1 ;
        printf("%*s\n", c + 22, a) ;
    }
    return 0 ;    printf("----------\n") ;

}
