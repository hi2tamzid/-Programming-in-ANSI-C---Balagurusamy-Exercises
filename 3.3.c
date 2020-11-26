#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    char x[100] ;
    scanf("%s", x);
    int len = strlen(x);
    printf("%c%c\n", x[len - 2], x[len - 1]) ;
    return 0;
}


