#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float sum = 1, i;

    for (i = 1 ; i <= n ; i++)
    {
        sum += (1/i);
    }

    printf("%f\n", sum);
    return 0;
}
