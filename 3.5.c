/// a program that displays the number as follows:

/// First line  : all digits
/// Second line : all except first digit
/// Trird line  : all except first two digit

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
        int len, i, count = 0, number = 0,  base = 1, number2 = 0,first = n;
        len = log10(n);
        for(i = 0 ; i <
         len ; i++)
        {
            count = base * (first % 10) ;
            number += count;
            if (i == len - 2)
                number2 = number;
            base *= 10;
            first /= 10;
        }

        printf("First line \t\t:\t%d\n", n ) ;
        printf("Second line \t\t:\t%d\n", number ) ;
        printf("Third line \t\t:\t%d\n", number2 ) ;
        printf("......\n");
        printf("Last line \t\t:\t%d\n", n % 10 ) ;

    }
    return 0;
}

