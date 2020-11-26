#include <stdio.h>

int main()
{
    int  option;
    float f, c;
    while(1)
    {
        printf("Chose an Option(1/2):\n");
        printf("1) Celsius to Fahrenheit.\n");
        printf("2) Fahrenheit to Celsius.\n\n\n");

        printf("Enter the number: ");
        scanf("%d", &option);
        if(option == 1)
        {
            printf("Enter Celsius Temperature: ");
            scanf("%f", &c);
            f = (9 * c / 5) + 32;
            printf("\nConversion of %.2fC is %.2fF\n", c, f);
        }
        else if(option == 2)
        {
            printf("Ente Fahrenheit Temperature: ");
            scanf("%f", &f);
            c = (f - 32) * 5 / 9;
            printf("\nConversion of %.2fF is %.2fC\n", f, c);
        }

        else
        {
            printf("Invalid Option\n");
        }

        printf("\n\n1)Want to try Again. OR\n2)Terminate the program...?\nEnter: ");
            scanf("%d", &option);
            if(option == 1)
            {
                printf("\n\n");
                continue;
            }
            else
                return 0;

    }
    return 0;
}
