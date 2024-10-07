#include<bits/stdc++.h>
using namespace std ;
int a[10000000] ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n , q ;
        cin >> n >> q ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        while( q--)
        {
            int sum = 0 ,l , r ;
            cin >> l >> r ;
            for( int i = l - 1 ; i < r ; i++)
            {
                sum += a[i] ;
            }
            cout << sum << endl ;
        }
    }
}
