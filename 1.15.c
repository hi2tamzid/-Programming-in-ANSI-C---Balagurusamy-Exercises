#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("x =  %d\t\ty =  %d\nsum =  %d\tDifference =  %d\nProduct =  %d\tDivision =  %d\n", x, y, x + y, abs(x-y), x * y, x / y);

    return 0;
}
