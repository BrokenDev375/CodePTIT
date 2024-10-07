#include <stdio.h>
#include <string.h>
long long nn(char a[], char b[])
{
    long long nn1 = 0, nn2 = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int c = a[i] - '0';
        if (c == 6)
        {
            c = 5;
        }
        nn1 = nn1 * 10 + c;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        int c = b[i] - '0';
        if (c == 6)
        {
            c = 5;
    }
        nn2 = nn2 * 10 + c;
    }
    return nn1 + nn2;
}

long long ln(char a[], char b[])
{
    long long ln1 = 0, ln2 = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        int c = a[i] - '0';
        if (c == 5)
            c = 6;
        ln1 = ln1 * 10 + c;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        int c = b[i] - '0';
        if (c == 5)
            c = 6;
        ln2 = ln2 * 10 + c;
    }
    return ln1 + ln2;
}

void solve()
{
    char a[20], b[20];
    scanf("%s %s", a, b);
    printf("%lld %lld\n", nn(a, b), ln(a, b));
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;	
}