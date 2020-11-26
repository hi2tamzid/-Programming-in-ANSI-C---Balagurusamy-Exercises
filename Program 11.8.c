#include <stdio.h>
#include <math.h>
#define PI 3.1416926

//double y(double) ;
////double cos(double) ;
//double table(double(*f)(), double, double, double) ;

int main()
{
    printf("Table of y(x) = 2*x*x-x+1\n\n") ;
//    table(y, 0.0, 2.0, 0.5) ;
    printf("\nTable of cos(x)\n\n") ;
//    table(cos,0.0, PI, 0.5) ;
    printf("%lf\n", cos(0.50)) ;
    return 0 ;
}

//double table(double (*f)(), double min, double max, double step)
//{
//    double a, value ;
//    for(a = min ; a <= max ; a += step)
//    {
//        value = (*f)(a) ;
//        printf("%d\n") ;
//        printf("%5.2f %10.4f\n", a, value) ;
//    }
//
//}
//
//double y(double x)
//{
//    printf("cos a cholbe na\n") ;
//    return (2 * x * x - x + 1) ;
//}
