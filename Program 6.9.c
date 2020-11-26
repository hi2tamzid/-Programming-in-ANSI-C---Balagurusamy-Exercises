#include <stdio.h>
#define LOOP 100
#define ACCURACY 0.00001

int main()
{
    int n ;
    float x, term, sum ;
    printf("Input value of x : ") ;
    scanf("%f", &x) ;
    sum = 0 ;
    for(term = 1 , n = 1 ; n <= LOOP ; ++n)
    {
        sum += term ;
        printf("%f\n", term) ;
        if (term <= ACCURACY)
            goto output ;
        term *= x ;

    }

    printf("\nFinal value of n is not suficient\n") ;
    printf("TO ACHIEVE DESIRED ACCURACY\n") ;
    goto end ;
    output:
        printf("\nEXIT FROM LOOP\n") ;
        printf("Sum = %f; No, of terms %d\n", sum, n) ;
        end:

    return 0 ;
}
