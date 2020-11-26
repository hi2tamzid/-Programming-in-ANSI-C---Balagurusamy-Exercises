#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "WORDPROCESSING" ;
    char b[100], c[100];
    int len = strlen(a), i,j ;
    /// For (a)
//    for (i = 0, j = 0 ; i < len; j++)
//    {
//        if(j == 4)
//        {
//            b[j] = ' ' ;
//            continue ;
//        }
//        b[j] = a[i] ;
//        i++ ;
//    }
//    b[j] = '\0' ;
//    printf("%s\n", b) ;

/// For (b)
//int k ;
//    for (i = 0,j = 0, k = 0 ; i < len ; i++)
//    {
//        if(i >= 4)
//            {
//                c[k] = a[i];
//                k++;
//            }
//        else
//            {
//                b[j] = a[i] ;
//                j++ ;
//            }
//
//    }
//    b[j] = '\0' ;
//    c[k] = '\0' ;
int k = 4 ;
    printf("%.4s\n",  a, a) ;
    return 0;
}
