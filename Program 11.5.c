#include <stdio.h>

int main()
{
    char *name ;
    int length  = 0 ;
    char *cptr = "hello" ;
    printf("%c\n", cptr[1] ) ;
//    while(*cptr != '\0')
//    {
//        printf("%c is stored at address &u\n", *cptr, cptr) ;
//        cptr++ ;
//    }

//    length = cptr - name ;
    printf("\nLength of the string = %d\n", length) ;
    return 0 ;
}
