/// a program to calculate the total distance travelled by
/// a vehicle in t seconds.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    double distance, u, t, a;
    while(scanf("%lf %lf %lf", &u, &a, &t) != EOF)
    {
        distance = u * t + 0.5 * a * t * t;
        printf("%.0lf\n", distance) ;

    }
    return 0;
}

