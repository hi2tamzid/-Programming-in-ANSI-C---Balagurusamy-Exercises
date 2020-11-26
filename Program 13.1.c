#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *table ;
    int size ;
    printf("\nWhat is the size of table? ") ;
    scanf("%d", &size) ;
    printf("\n") ;
    ///-------- Memory allocation ---------

    if((table = (int *)malloc(size * sizeof(int))) == NULL)
    {
        printf("No space available \n") ;
        exit(1) ;
    }
    printf("\n Address of the first byte is %u\n", table) ;
    /// Reading table values

    printf("\nInput table values\n") ;

    for(p = table ; p < table + size; p++)
        {
            scanf("%d", p) ;
        }
    /// printing table values in reverse order

    for(p = table; p < table + size ; p++)
    {
        printf("%d is stored at address %u \n", *p, p) ;
    }
    return 0 ;
}
