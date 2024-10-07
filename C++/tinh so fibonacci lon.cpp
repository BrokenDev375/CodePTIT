#include<bits/stdc++.h>
using namespace std ;
const long long MOD = 1e9 + 7 ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        if(n == 0 || n == 1)
        {
            cout << n << endl ;
        }
        else
        {
            long long f1 = 0;
            long long f2 = 1 ;
            long long res ;
            for( int i = 2 ; i <= n ; i++)
            {
                res = ((f1 % MOD ) + ( f2 % MOD ) ) % MOD ;
                f1 = f2 ;
                f2 = res ;
            }
            cout << res << endl ;
        }
    }
}
