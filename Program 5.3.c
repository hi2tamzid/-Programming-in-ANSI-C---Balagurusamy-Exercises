/// A program to evaluate the power series...
///
#include <stdio.h>
#define accuracy 0.0001

long long factorial(long long a)
{
    long long sum = 1 ;
    while(a > 0)
    {
        sum *= a ;
        a-- ;
    }
    printf("sum = %lld\n", sum) ;
    return sum ;
}
int main()
{
    int n = 4, count, i ;
    float x, term, sum = 0 ;
    printf("Enter value of x:") ;
    scanf("%f", &x) ;
    sum = 1 + x ;
    for(i = 2 ; i <= n; i++)
    {
        term = (x * x)/factorial(i) ;
        sum += term ;
        printf("%d = %f\n", i, term) ;
    }


    printf("Terms = %d Sum = %f\n", i-1, sum) ;
    return 0 ;
}
