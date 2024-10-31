#include <stdio.h>
int main()
{
    int n, f, t;
    int x[1000001];
    int a[1000001];
    int j = 0;
    int a1, a2;
    scanf("%d %d %d", &n, &f, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a1, &a2);
        if (t - a1 > f - a2)continue;
        else
        {
            x[j] = a1;
            a[j] = a2;
            j++;
            if (t - a1 > a2;)j++;
        }
    }
    printf("%d", j);
    return 0;
}