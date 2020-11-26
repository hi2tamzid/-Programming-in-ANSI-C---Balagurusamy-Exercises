#include <stdio.h>
#include <string.h>


int main()
{
    char line[81], ctr ;
    int i, c, end = 0, characters = 0, words = 0, lines = 0 ;
    printf("Key In The Text.\n") ;
    printf("Give one space after each word.\n") ;
    printf("When completed, press 'RETURN'.\n\n") ;
    while( end == 0)
    {
        /// Reading a line of text
        c = 0 ;
        while((ctr = getchar()) != '\n')
            line[c++] = ctr ;
        line[c] = '\0' ;
        /// counting the words in a line
        if(line [0] == '\0')
            break ;
        else
        {
            words++ ;
            for(i = 0 ; line[i] != '\0' ; i++)
                if(line[i] == ' ' || line[i] == '\t')
                    words++ ;
            }
            /// counting lines and characters
            lines = lines + 1;
            characters = characters + strlen(line) ;
        }
        printf("\n") ;
        printf("Number of lines = %d\n", lines) ;
        printf("Number of words = %d\n", words) ;
        printf("Number of characters = %d\n", characters) ;
    return 0 ;
}
