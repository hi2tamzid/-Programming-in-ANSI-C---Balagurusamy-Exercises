#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        int d = a > b && a > c ? a : b > c ? b : c ;
        printf("%d\n", d) ;
    }
    return 0;
}

