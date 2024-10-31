#include<stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int num[10];
    int i = 0;

    while(input != 0)
    {
        num[i] = input % 10;
        input = input / 10;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        printf("%d   ", num[j]);
    }
    return 0;
}