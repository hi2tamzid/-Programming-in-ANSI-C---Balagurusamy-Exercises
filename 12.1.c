#include <stdio.h>

int main()
{
    FILE *first, *second ;
    first = fopen("first.txt", "w") ;
    second = fopen("second.txt", "w") ;
    int i ;
    for(i = 1 ; i <= 100 ; i++)
    {
        fprintf(first, "%d", i) ;
        if(i < 100)
            fprintf(first, "\n") ;
    }
    fclose(first) ;
    first = fopen("first.txt", "r") ;
    while(!feof(first))
    {
        fscanf(first, "%d", &i) ;
        fprintf(second, "%d\n", i) ;
        printf("%d\n", i) ;
    }
    return 0 ;
}
