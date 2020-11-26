#include <stdio.h>
void change(int *) ;
int main()
{
    int x ;
    x = 20 ;
    change(&x) ; /// call by reference or address
    printf("%d\n", x) ;
    return 0 ;
}


void change(int *q)
{
    *q = *q + 10 ;
}
