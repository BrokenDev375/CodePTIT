#include<bits/stdc++.h>
long long solve(long long res , long long b , long long m)
{
    if(b == 1)
    {
        return res ;
    }
    long long tmp = solve(res , b / 2 , m) ;
    if( b % 2 == 0)
    {
        return (tmp * tmp ) % m ;
    }
    else
    {
        return (((tmp * tmp) % m) * res) % m ;
    }
}
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string a;
        cin >> a ;
        long long  b , m;
        cin >> b >> m ;
        long long res = 0 ;
        for( int i = 0 ; i < a.size() ; i++)
        {
            int tmp = a[i] - '0' ;
            res = res *10 + tmp ;
            res %= m ;
        }
        cout << solve(res , b , m) << endl ;
    }
}
