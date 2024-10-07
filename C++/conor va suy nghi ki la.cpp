#include<bits/stdc++.h>
using namespace std ;
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n ;
        int res = 0 ;
        cin >> n ;
        for( long long i = 1 ; i <= n ; i++)
        {
            for( long long j = i + 1 ; j <= n ; j++)
            {
                if( (i / gcd(i , j) ) * ( j / gcd(i , j))  <= 3)
                {
                    res += 2 ;
                }
            }
        }
        res += n ;
        cout << res << endl ;
    }
}
