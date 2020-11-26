#include <stdio.h>

struct time_struct
{
    int hour, minute, second ;

};

int main()
{
    struct time_struct m = {16, 40, 51} ;

    printf("%d:%d:%d\n", m.hour, m.minute, m.second) ;
    return 0 ;
}
