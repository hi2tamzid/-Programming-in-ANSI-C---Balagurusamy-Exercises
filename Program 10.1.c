#include <stdio.h>

struct complex /// Declaring the complex number datatype using structure.
{
    double real ;
    double img ;

};

struct complex add(struct complex c1, struct  complex c2)
{
    struct complex c3 ;
    c3.real = c1.real + c2.real ;
    c3.img = c1.img + c2.img ;
    return (c3) ;
};
int main()
{
    struct complex s1 = {12.0, 23.4} , s2 = {1.0, 3.0}, s3 ;

    s3 = add(s1, s2) ;
    printf("%lf %lf\n", s3.real, s3.img) ;
    return 0 ;
}
