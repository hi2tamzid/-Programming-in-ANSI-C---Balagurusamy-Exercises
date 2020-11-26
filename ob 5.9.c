#include <stdio.h>

int main()
{
    int x, y, z ;

    x = 5, y = 0, z = 1 ;
    if(x == y || x  && z )
        y = 10 ;
    else
        z = 0 ;
    printf("%d %d %d\n", x, y, z) ;
    return 0 ;

}
