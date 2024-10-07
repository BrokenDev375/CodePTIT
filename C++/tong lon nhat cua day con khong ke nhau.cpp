#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        long long dp[n];
        if(n == 0)
        {
            cout << 0 << endl ;
        }
        if(n == 1)
        {
            cout << a[0] << endl ;
        }
        if(n == 2)
        {
            cout << max(a[0] , a[1]) << endl ;
        }
        else
        {
            dp[0] = a[0] ;
            dp[1] = max(a[0] , a[1]) ;
            for( int i = 2 ; i < n ; i++)
            {
                dp[i] = max(dp[i - 1] , dp[i - 2] + a[i]) ;
            }
            cout << dp[n - 1] << endl ;
        }
    }
}
