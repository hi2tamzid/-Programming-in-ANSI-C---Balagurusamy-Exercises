#include <stdio.h>
#include <string.h>
int main()
{
    double n;
    char array[100];
    int i, store;

    scanf("%s", array);

    int len = strlen(array);

    for (i = 0 ; i < len ; i++)
    {
        if(array[i] == '.')
            {
                store = i;
                break;
            }
    }
    printf("%d\n", store);
    for (i = store ; i < len - 1 ; i++)
    {
        array[i] = array[i+1];
    }
    array[i] = '\0';
    printf("%s paisa\n", array);
    return 0;
}
