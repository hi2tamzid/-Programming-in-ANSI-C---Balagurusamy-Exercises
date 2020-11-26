#include <stdio.h>
void input_x(int *) ;
void input_y(int *) ;
void exchange(int *, int *) ;
int main()
{
    int x, y ;
    input_x(&x) ;
    input_y(&y) ;
    printf("Value of x is %d\nValue of y is %d\n", x, y) ;
    char a = getchar(), b = getchar() ;
    printf("%d %d\n", a, b) ;
    exchange(&x, &y) ;
    printf("Value of x is %d\nValue of y is %d\n", x, y) ;
    return 0 ;
}
void input_x(int *p)
{
    scanf("%d", p) ;
}
void input_y(int *q)
{
    scanf("%d", q) ;
}

void exchange(int *p, int *q)
{
    int temp ;
    temp = *p ;
    *p = *q ;
    *q = temp ;
}
