#include <stdio.h>
#include <conio.h>

void main()
{
    int a1[10][10], a2[10][10], c[10][10], i, j, k, a , b;
    printf("Enter the size of the square matrix\n") ;
    scanf("%d", &a) ;
    b = a ;
    printf("You have to enter the matrix elements in row-wise fashion\n") ;
    for(i = 0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {
            printf("\nEnter the next element in the 1st matrix=") ;
            scanf("%d", &a1[i][j]) ;
        }
    }
    for(i = 0 ; i < a ; i++)
    {
        for(j = 0 ; j < b ; j++)
        {
            printf("\n\nEnter the next element in the 2nd matrix = ") ;
            scanf("%d", &a2[i][j]) ;

        }
    }
    printf("\n\nEntered matrices are\n") ;
    for(i = 0 ; i < a ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j  < b ; j++)
            printf(" %d ", a2[i][j]) ;
    }

    printf("\n\nProduct of the two matrices is \n") ;
    for(i = 0 ; i < a ; i++)
        for(j = 0 ; j < b ; j++)
    {
        c[i][j] = 0 ;
        for(k = 0 ; k < a ; k++)
            c[i][j] = c[i][j] + a1[i][k] * a2[k][j] ;
    }
    for(i = 0 ; i < a ; i++)
    {
        printf("\n") ;
        for(j = 0 ; j < b ; j++)
        {
            printf(" %d ", c[i][j]) ;
        }
    }
    getch() ;
}
