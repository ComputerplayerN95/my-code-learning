#include <stdio.h>
#include <math.h>
int main()
{
    float input;
    float a;
    int c;
    scanf("%f", &input);
    if(input > 1e3)printf("请输入一个小于1000的数\n");
    else
    {
        a = sqrt(input);
        c = (int)a;
        printf("%d", c);

    }
    return 0;
}