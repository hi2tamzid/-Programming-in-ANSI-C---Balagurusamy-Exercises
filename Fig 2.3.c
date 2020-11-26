#include <stdio.h>

main()
{
    char a = '\a';
//    scanf("%d", &a);
//    if(a == 1)
    printf("Integer 10 %cvalues\n", a);
    printf("%d %d %d\n", 32767, 32767+1, 32767+10);
    printf("\n");
    printf("Long integer values\n\n");
    printf("%ld %ld %ld\n", 32767L, 32767L + 1L, 32767L + 10L);
}
