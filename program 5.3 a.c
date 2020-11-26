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
    int n = 1 , count, i ;
    float x, term, sum ;
    printf("Enter value of x:") ;
    scanf("%f", &x);
    term = sum = count = 1 ;
    while(n <= 3)
    {
        term = term * (x/n) ;
        sum = sum + term ;
        count = count + 1 ;
        printf("%d %f\n", n, term) ;
        if (term < accuracy)
            n = 999 ;
        else
            n = n + 1 ;
    }

    printf("Terms = %d Sum = %f\n", count, sum) ;
    return 0 ;
}

