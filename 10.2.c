#include <stdio.h>

struct time_struct
{
    int hour, minute, second ;

};

struct time_struct input()
{
    struct time_struct p ;
    scanf("%d %d %d", &p.hour, &p.minute, &p.second) ;
    return (p) ;
}

void output(struct time_struct o)
{
    printf("%d:%d:%d\n", o.hour, o.minute, o.second) ;
}
int main()
{
    struct time_struct m  ;
    m = input() ;

    output(m) ;
    return 0 ;
}

