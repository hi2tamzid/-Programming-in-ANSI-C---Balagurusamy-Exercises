#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    double l, r, c ;
    while(scanf("%lf %lf", &l, &r) != EOF)
    {
        double F, i ;
        for (i = 0.01 ; i <= 0.1 ; i += 0.01)
        {
            c = i ;
            F = sqrt((1.0/ l * c) - r * r / 4 /( c * c)) ;
            printf("Step %g : %g\n", i, F) ;

        }
    }
    return 0;
}

