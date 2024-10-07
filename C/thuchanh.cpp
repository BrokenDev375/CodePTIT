#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int main()
{
    int a[4][2];
    int minx = 100, maxx = -100;
    int miny = 100, maxy = -100;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
        minx = min(minx, a[i][0]);
        maxx = max(maxx, a[i][0]);
        miny = min(miny, a[i][1]);
        maxy = max(maxy, a[i][1]);
    }
    int MAX = max(maxx - minx, maxy - miny);
    printf("%d", MAX * MAX);
    return 0;
}