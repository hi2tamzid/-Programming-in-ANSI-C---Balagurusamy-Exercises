#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int t;

    while(scanf("%d", &t) != EOF)
    {
        int i, calls[t];
        double total_bills = 0;
        for(i = 0 ; i < t ; i++)
        {
            scanf("%d", &calls[i]) ;
        }
        printf("-------Customer Bills-------\n\n");
        for(i = 0  ; i < t ; i++)
        {
            if(calls[i] > 100)
            total_bills = 250 + (calls[i] - 100) * 1.25 ;
            else
                total_bills = calls[i] * 1.25 ;

            printf("Customer #%d: %.2lf\n", i+1, total_bills) ;
        }
    }
    return 0;
}

