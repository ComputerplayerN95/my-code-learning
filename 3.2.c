#include <stdio.h>
int main()
{
    int math,eng,comp;
    float average;
    scanf("%d %d %d",&math,&eng,&comp);
    average=(math+eng+comp)/3.0;
    printf("math=eng=comp=average=%.2f\n",average);
    return 0;
}