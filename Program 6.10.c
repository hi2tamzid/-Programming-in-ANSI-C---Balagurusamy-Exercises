#include <stdio.h>
#include <math.h>

int main()
{
    int count, negative ;
    double number, sqroot ;
    printf("Enter 9999 to STOP\n") ;
    count = 0 ;
    negative = 0 ;
    while(count <= 100)
    {
        printf("Enter a number : ") ;
        scanf("%lf", &number) ;
        if (number == 9999) /// EXIT FROM THE LOOP
            break ;
        if(number < 0 )
        {
            printf("Number is negative\n\n") ;
            negative++ ;
            continue ;
        }
        sqroot = sqrt(number) ;
        printf("Number = %lf\nSquare root = %lf\n\n", number, sqroot) ;
        count++ ;
    }
    printf("Number of items done = %d\n", count) ;
    printf("\n\nNegtive items = %d\n", negative) ;
    printf("END OF DATA\n") ;
    return 0 ;

}
