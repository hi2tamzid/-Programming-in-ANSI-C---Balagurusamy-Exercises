/// a program to determine the area and the perimeter of a
/// rectangle

/// Area of a rectangle = length * width
/// Perimeter of a rectangle = 2 ( length + width)

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int l, w;
    while(scanf("%d %d", &l, &w) != EOF)
    {
        int area = l * w ;
        int perimeter = 2 * (l + w) ;

        printf("Area = %d, Perimeter = %d\n", area, perimeter) ;
    }
    return 0;
}

