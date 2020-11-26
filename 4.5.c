#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b) ;
    printf("\t%5d\n", a) ;
    printf("X\t%5d\n", b) ;
    printf("----------------\n") ;
    printf("%dX%d is %5d\n", a, (b%10), a * (b%10)) ;int c = b/10;
    printf("%dX%d is %5d\n", a, b%10, a * (b % 10)) ;
    printf("----------------\n") ;
    printf("Add them%5d\n", a * b) ;
    printf("----------------\n") ;
    return 0;
}
