#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    float TBO, EOQ, demand_rate, setup_costs, holding_cost;
    while(scanf("%f %f %f", &demand_rate, &setup_costs, &holding_cost)!= EOF)
    {
        EOQ = sqrt(2 * demand_rate * setup_costs / holding_cost) ;
        TBO = sqrt(2 * setup_costs / demand_rate / holding_cost) ;

        printf("EOQ = %.2f\nTBO = %.2f\n", EOQ, TBO) ;

    }
    return 0;
}

