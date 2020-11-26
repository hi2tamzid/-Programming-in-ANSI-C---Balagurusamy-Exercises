#include <stdio.h>

int main()
{
    char country[15] = "United Kingdom" ;
    printf("\n\n") ;
    printf("*123456789012345*\n") ;
    printf("-----\n") ;
    printf("%s\n", country) ;
    printf("%5s\n", country) ;
    printf("%15.6s\n", country) ;
    printf("%-15.6s\n", country) ;
    printf("%15.0s\n", country) ;
    printf("%.3s\n", country) ;
    printf("%s\n", country) ;
    printf("_____\n") ;
    return 0 ;
}
