#include <stdio.h>
#include <conio.h>

int function();
int main()
{
    extern int c;

    return 0 ;
}

function()
{
//    int count  = 0 ;
    int c  = 4;
    printf("%d\n", c) ;
}
