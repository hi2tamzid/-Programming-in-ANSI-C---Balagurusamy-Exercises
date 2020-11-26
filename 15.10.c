#include <stdio.h>

power (int x, int y)
{
    int p ;
    p = y ;
    while(y > 0)
        x *= y-- ;
    return (x) ;
}
int main()
{
    printf("%d\n", power(2, 3)) ;
    return 0 ;
}
