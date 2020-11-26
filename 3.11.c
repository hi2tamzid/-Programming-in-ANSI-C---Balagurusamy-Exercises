#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int last, total = 0 ;
        while(n != 0)
        {
            last = n % 10;
            total += last ;
            n/= 10;
        }
        printf("%d\n", total) ;
    }
    return 0;
}
