#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long x , y , p ;
        cin >> x >>  y >>  p ;
        long res = 1 ;
        for( int i = 0 ; i < y ; i++)
        {
            res %= p ;
            res *= x ;
        }
        res %= p ;
        cout << res << endl ;
    }
}
