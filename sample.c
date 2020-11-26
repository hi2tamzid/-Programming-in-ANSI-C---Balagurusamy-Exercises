#include <stdio.h>

int main()
{
     int volatile x = 1;
     x++;
     x++;
    printf("%d", x);
    return 0;
}
