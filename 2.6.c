#include <stdio.h>

int main()
{
    int n = -1, positive[1000], negtive[1000], j = 0, k = 0;
    while(n != 0)
    {
        scanf("%d", &n);
        if(n > 0)
        {
            positive[j] = n;
            j++;
        }
        else if(n < 0)
        {
            negtive[k] = n;
            k++;
        }
    }
    printf("\n\n-----Positive Values-----\n\n");
    for(n = 0 ; n < j ; n++)
        printf("%d\n", positive[n]);

    printf("\n\n-----Negtive Values-----\n\n");
    for(n = 0 ; n < k ; n++)
        printf("%d\n", negtive[n]);
    return 0;
}
