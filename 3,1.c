#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int x, y, z ;
    scanf("%d %d %d", &x, &y, &z);
    x = x + y ;
    y = x - y ;
    x = x - y ;
    y = y + z ;
    z = y - z ;
    y = y - z ;
    printf("x = %d, y = %d, z = %d\n", x, y, z) ;
    return 0;
}

