#include <stdio.h>
#include <math.h>

int main()
{
    double circumference, perimeter, area, radius, x, y;
    scanf("%lf %lf", &x, &y);

    circumference = sqrt((x - 0) * (x - 0) + (y - 0) * (y - 0));

    radius = circumference / 2.0 * 3.1416;
    perimeter = 2 * radius * 3.1416;
    area = 3.1416 * radius * radius;

    printf("Perimeter is %.2lf\nArea of the circle is %.2lf\n", perimeter, area);

    return 0;
}
