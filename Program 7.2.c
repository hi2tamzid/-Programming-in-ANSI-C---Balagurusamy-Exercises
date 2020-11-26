#include <stdio.h>
#define MAXVAL 50
#define COUNTER 11

int main()
{
    ///     Method 1...
//    int marks[50],group[11] = {0} ;
//    int i, j ;
//    for(i = 0 ; i < 50 ; i++)
//    {
//        scanf("%d", &marks[i]) ;
//        j = marks[i] / 10 ;
//        group[j]++ ;
//    }
//    printf("Group\t\tMarks Range\t\tFrequency\n") ;
//    for(i = 0, j = 0 ; i < 11 ; i++, j += 10)
//    {
//        printf("%d\t\t%4d to %4d\t\t%d\n", i + 1, j, j + 9, group[i]) ;
//    }

///. . . Method 2 . . . .
    float value[MAXVAL] ;
    int i, low, high ;
    int group[COUNTER] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ;
    /**......READING AND COUNTING.....*/
    for(i = 0 ; i < MAXVAL ; i++)
    {
        /** . . . . READING OF VALUES. . . . . */

        scanf("%f",&value[i]) ;
        /**. . . . . COUNTING FREQUENCY OF GROUPS. . . . .*/
        ++group[(int) (value[i]) / 10] ;
    }

    /** . .. . PRINTING OF FREQUENCY TABLE. . . . */
    printf("\n") ;
    printf(" GROUP RANGE FREQUENCY\n\n") ;
    for(i = 0 ; i < COUNTER; i++)
    {
        low = i * 10 ;
        if(i == 10)
            high = 100 ;
        else
            high = low + 9 ;
        printf("%2d %3d to %3d %d\n", i + 1, low, high, group[i]) ;
    }

    return 0 ;
}
