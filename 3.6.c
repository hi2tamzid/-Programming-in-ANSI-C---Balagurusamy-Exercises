/// a program to determine the salvage value o an item when
/// the purchase price, years of service , and the annual depreciation
/// are given.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int depreciation, purchase_price, salvage_value, years_of_service;
    while(scanf("%d %d %d", &purchase_price, &years_of_service, &depreciation) != EOF)
    {
        salvage_value = ((depreciation * years_of_service) - purchase_price) * (-1) ;
        printf("%d\n", salvage_value) ;
    }
    return 0;
}

