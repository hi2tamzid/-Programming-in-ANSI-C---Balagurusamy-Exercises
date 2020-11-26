#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    char a[100],b[100] ;
    int i, len ;
    while(gets(a))
    {
        len = strlen(a) ;

        for(i = 0 ; i < len - 1; i++)
            printf("%d ", a[i]) ;
        if(len > 0)printf("%d\n", a[i]) ;
    }
    return 0;
}
