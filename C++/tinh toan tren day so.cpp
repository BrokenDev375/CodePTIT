#include<bits/stdc++.h>
using namespace std ;
const int MOD = 1e9+7 ;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        long long a[n] ;
        long long h = 1 , g ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            h = h * a[i] % MOD ;
        }
        g = a[0] ;
        for(int i = 1 ; i < n ; i++)
        {
            g = __gcd(g , a[i]) ;
        }
        long long res = 1 ;
        for( int i = 1 ; i <= g ; i++ )
        {
            res = res * h % MOD ;
        }
        cout << res << endl ;
    }
}
