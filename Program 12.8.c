#include <stdio.h>

main(int arge, char *argv[])
{
    FILE *fp ;
    int i ;
    char word[15] ;

    fp  = fopen(argv[1], "w") ; /// open file with name argv[1]
    printf("\nNo. of arguments in command line = %d\n\n", arge) ;
    fprintf(fp, "%s", argv[i]) ; /// write to file argv[i]
    fclose(fp) ;

    /// Writing content of the file to screen

    printf("Contents of %s file \n\n", argv[1]) ;

    fp = fopen(argv[1], "r") ;

    for(i = 2 ; i < arge ; i++)
    {
        fscanf(fp, "%s", word) ;
        printf("%s", word) ;
    }
    fclose(fp) ;
    printf("\n\n") ;

    /// Writing the arguments from memory

    for(i = 0 ; i < arge ; i++)
    {
        printf("%*s \n", i * 5, argv[i]) ;
    }
}
