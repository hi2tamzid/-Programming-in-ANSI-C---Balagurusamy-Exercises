#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int sum, average, largest, smallest, a, b, c ;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        sum = a + b + c ;
        average = sum / 3 ;
        largest = a > b && a > c ? a : b > c ? b : c ;
        smallest = a < b && a < c ? a : b < c ? b : c ;
        printf("Sum = %d\nAverage = %d\nLargest = %d\nSmallest = %d\n", sum, average, largest, smallest) ;

    }
    return 0;
}

