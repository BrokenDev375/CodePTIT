#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long b , p ;
        cin >> b >> p ;
        int res = 0 ;
        int limit = min(b , p);
        for( long long i = 1 ; i < limit ; i++)
        {
            if( (i * i ) % p == 1)
            {
                res += (b - i) / p + 1 ;
            }
        }
        cout << res << endl ;
    }
}
