#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *buffer ;
    /// Allocating memory
    if((buffer = (char *)malloc(10)) == NULL)
    {
        printf("malloc failed.\n" ) ;
        exit(1) ;

    }

    printf("Buffer of size %d created\n", _msize(buffer)) ;
    strcpy(buffer, "HYDERABAD") ;
    printf("\nBuffer contains: %s \n", buffer) ;
    /// Reallocation
    if((buffer = (char *)realloc(buffer, 15)) == NULL)
    {
        printf("Reallocation failed.\n");
        exit(1) ;
    }

    printf("\nBuffer size modified. \n") ;
    printf("\nBuffer still contains: %s \n", buffer) ;
    strcat(buffer, "lolapu") ;
    printf("\nBuffer now contains : %s \n", buffer) ;
    /// Freeing memory
    free(buffer) ;
    return 0 ;
}
