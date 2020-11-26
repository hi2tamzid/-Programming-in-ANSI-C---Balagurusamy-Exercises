#include <stdio.h>
#include <math.h>

void main()
{
    int num, i, y, x = 40, z ;
    printf("\nEnter a number for generating the pyramid:\n") ;
    scanf("%d", &num) ;
    for(y = 0,z = num ; y <= num ; y++, z = num-y)
    {
        xy:
            printf("   ") ;
            if(z--)
                goto xy;
        for(i = 0 - y ; i <= y ; i++)
            printf("%3d", abs(i)) ;
            yx:
            printf("   ") ;
        if(++z < num/2)
            goto yx;
        printf("\n") ;
    }
}
