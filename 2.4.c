#include <stdio.h>

int main()
{
    float n, m;
    while(scanf("%f %f", &n, &m) != EOF)
    {
        float result;
        result = n / m;
        printf("%.2f / %.2f = %.2f\n", n, m, result);
    }
    return 0;
}
