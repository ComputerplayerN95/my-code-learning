#include<stdio.h>
int compare(int a,int b,char c[4])
{
    if(c[1] == 'a')
    {
        if(a>b)
        {
            return a;
        }
        if(b>a)
        {
            return b;
        }
    }
    if(c[1] == 'i')
    {
        if(a<b)
        {
            return a;
        }
        if(b<a)
        {
            return b;
        }
    }
}
int main()
{
    int a,b;
    int n;
    char c[4];
    printf("请输入两个数和比较方式：");
    scanf("%d %d %s",&a,&b,&c);
    compare(a,b,c);
    printf("%d",compare(a,b,c));
    return 0;
}