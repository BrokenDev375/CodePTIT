#include <stdio.h>

void solve(int t)
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[50][50];
    int sumh = 0, sumc = 0;
    int sumhpos, sumcpos;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        if (sum > sumh)
        {
            sumh = sum;
            sumhpos = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            if (i == sumhpos)
            {
                continue;
            }
            sum += a[i][j];
        }
        if (sum > sumc)
        {
            sumc = sum;
            sumcpos = j;
        }
    }
    printf("Test %d:\n", t);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == sumhpos || j == sumcpos)
                continue;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        solve(t);
    }
    return 0;
}