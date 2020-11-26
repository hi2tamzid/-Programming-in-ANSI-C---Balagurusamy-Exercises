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
    while(scanf("%s", a) != EOF)
    {
        int i, j, len = strlen(a) ;
        for(i = 0 ; i < len ; i++)
        {
            for(j = 0 ; j < len - i - 1; j++)
            {
                if(a[j] > a[j+1])
                {
                    char temp = a[j];
                    a[j] = a[j + 1] ;
                    a[j + 1] = temp ;
                }
            }
        }

        printf("%s\n", a) ;
    }
    return 0;
}

