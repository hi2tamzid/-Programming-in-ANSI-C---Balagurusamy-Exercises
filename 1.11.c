#include <stdio.h>
#include <math.h>

int main()
{
    double d, x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%.2lf\n", d);
    return 0;
}
