#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int m, n;
    while(scanf("%d %d", &m, &n) != EOF)
    {
        if(m % n == 0)
            printf("%d is a multiple of %d\n", m, n) ;
        else
            printf("%d isn't a multiple of %d\n", m, n) ;

    }
    return 0;
}

