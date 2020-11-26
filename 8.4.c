/// Occurences of a text...

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    char str[100][100] ;
    char input[100], ch ;
    int i = 0,j, count[100] = {1};
    while(scanf("%s", input) != EOF)
    {
        for(j = 0 ; j < i ; j++)
        {
            if(strcmp(str[j], input) == 0)
            {
                count[j]++ ;
                goto hell;
            }
        }
        strcpy(str[i], input) ;
        i++ ;
        count[i]++;
        hell: i = i ;
    }
    printf("Occurence of Words...\n") ;
    for(j = 0 ; j < i ; j++)
    {
        printf("%s = %d\n", str[j],j, count[j]) ;
    }
    return 0;
}
