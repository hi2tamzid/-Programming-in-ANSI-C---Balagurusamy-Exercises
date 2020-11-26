#include <stdio.h>

int main()
{
    float rice, sugar;
    scanf("%f %f", &rice, &sugar);

    printf("*** LIST OF ITEMS ***\n");
    printf("Item\t\tPrice\nRice\t\tRs %.2f\n", rice);
    printf("Sugar\t\tRs %.2f\n", sugar);
    return 0;
}
