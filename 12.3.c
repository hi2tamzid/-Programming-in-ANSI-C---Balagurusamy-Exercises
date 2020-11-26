#include <stdio.h>

int main()
{
    FILE *first, *second ;
    first = fopen("first.txt", "r") ;
    second = fopen("second.txt", "w") ;
    int i, ret = 0 ;
    for(i = 1 ; i < 100 ; i++)
    {
//       fprintf(first, "%d\n", i) ;
       fprintf(second, "%d\n", i) ;
    }
//    fclose(first) ;
    fclose(second) ;
    second = fopen("second.txt", "r") ;
    char a[100], b[100] ;
    while(!feof(first) && !feof(second))
    {
        fscanf(first, "%s", a) ;
        fscanf(second, "%s", b) ;
        printf("%s %s\n", a, b) ;
        if(strcmp(a, b) != 0)
        {
            ret = 1 ;
            break ;
        }
    }

    printf("%d\n", ret) ;

    fclose(first) ;
    fclose(second) ;
    return 0 ;
}
