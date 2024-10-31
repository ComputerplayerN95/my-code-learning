#include <stdio.h>
#define pei 3.1415

int main()
{
    double r;
    double d,c,s;
    scanf("%lf", &r);
    d = 2 * r;
    c = 2 * pei * r;
    s = pei * r * r;
    printf("The diameter is %.2lf\nThe circumference is %.2lf\nThe area is %.2lf\n", d, c, s);
    return 0;
}
