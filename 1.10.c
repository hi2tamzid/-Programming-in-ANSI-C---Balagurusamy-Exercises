#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, S, A;
    scanf("%lf %lf %lf", &a, &b, &c);

    S = (a + b + c) / 2;
    A = sqrt(S * (S - a) * (S - b) * (S - c));
    printf("%.2lf\n", A);
    return 0;
}
