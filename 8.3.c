#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    char str[] = "Hello world" ;
    char str1[100] = {} ;
    int  i, chr = 0, j = 0 ;
    for(i = 0 ; i < strlen(str) ; i++)
    {
        if(str[i] == 'l' || chr == 1)
        {
            chr = 1 ;
            str1[j++] = str[i] ;
        }
    }
    str1[j] = '\0' ;
    printf("%s\n", str1) ;
    return 0;
}

