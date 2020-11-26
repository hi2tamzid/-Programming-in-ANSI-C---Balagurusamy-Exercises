#include <stdio.h>

#define PRINT_VALUE printf("%d %d\n", 2, 3)
#define sum(x) printf(#x " = %f\n",x)

int main()
{
    float a = 2, b = 3, c = 4, d = 2 ;
    sum(a*b*c*d) ;
    return 0 ;
}
