#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    char name[100] ;
    printf("Who is the inventor of C ?\n") ;
    int count = 0, check = 0 ;
    while( count < 3  &&gets(name))
    {

        if(strcmp(name, "Denis") == 0)
        {
            check = 1 ;
            break ;
        }
        else
            printf("Wrong! Try again....\n") ;
        printf("%d\n", count) ;
        count++ ;
    }
    if(check == 1)
        printf("Good\n") ;
    else
        printf("Absolutely!!!!! Wrong .\nCorrect Answer is Denis") ;
    return 0;
}

