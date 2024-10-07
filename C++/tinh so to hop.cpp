#include<bits/stdc++.h>
using namespace std ;
const int MOD = 1e9 + 7 ;
long long solve(int k , int n )
{
    long long res[n + 1][n + 1] ;
    for( int i = 0 ; i <= n ; i++)
    {
        for( int j = 0 ; j <= i ; j++)
        {
            if(i == j || j == 0 )
            {
                res[i][j] = 1 ;
            }
            else
            {
                res[i][j] = ((res[i - 1][j - 1] % MOD) + (res[i - 1][j] % MOD)) % MOD ;
            }
        }
    }
    return res[n][k] ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , k ;
        cin >> n >> k ;
        cout << solve(k , n) << endl ;
    }
}
