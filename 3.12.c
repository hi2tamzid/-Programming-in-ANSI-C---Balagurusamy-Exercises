#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    printf("int = %d\n", sizeof(int)) ;
    printf("short int = %d\n", sizeof(short int)) ;
    printf("signed int = %d\n", sizeof(signed int)) ;
    printf("unsigned int =  %d\n", sizeof(unsigned int )) ;
    printf("unsigned short int = %d\n", sizeof(unsigned short int)) ;
    printf("long int = %d\n", sizeof(long)) ;
    printf("unsigned long int = %d\n", sizeof(unsigned long)) ;
    printf("long long int = %d\n", sizeof(long long)) ;
    printf("unsigned long long int = %d\n", sizeof(unsigned long long)) ;
    printf("float = %d\n", sizeof(float)) ;
    printf("double = %d\n", sizeof(double)) ;
    printf("long double = %d\n", sizeof(long double)) ;
    printf("unsigned long double = %d\n", sizeof(unsigned long long)) ;

    return 0;
}

