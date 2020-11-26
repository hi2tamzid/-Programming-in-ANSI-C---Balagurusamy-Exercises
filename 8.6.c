#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    char a[100] ;
    while(gets(a))
    {
        int i, j, len = strlen(a) ;
        for(i = 0 ; i < len ; i++)
        {
            if(a[i] == 'P' && a[i+1] == 'A' && a[i+2] == 'S' && a[i+3] == 'C' && a[i+4] == 'A' && a[i+5] == 'L')
            {
                a[i] = 'C' ;
                i++ ;
                for(j = i + 5 ; a[j] != '\0' ; j++, i++)
                    a[i] = a[j] ;
                a[i] = '\0' ;
                goto end ;
            }
        }
        end:
            printf("%s\n", a) ;
    }
    return 0;
}

