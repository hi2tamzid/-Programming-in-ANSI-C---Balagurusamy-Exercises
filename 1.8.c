#include <stdio.h>

int main()
{
    int a, b, c, x;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF)
    {
        if (b - c == 0)
            printf("Invalid Input\n");
        else
        {
            x = a / (b - c);
            printf("a = %d, b = %d, c = %d & c = %d\n", a, b, c, x);
        }

    }
    return 0;
}
