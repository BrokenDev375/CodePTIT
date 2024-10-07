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
        for( int i = 0 ; i < n - 1 ; i++)
        {
            cin >> a[i] ;
        }
        sort( a , a + n) ;
        int res = 1 ;
        for( int i = 0 ; i < n - 1; i++)
        {
            if( res == a[i])
            {
                res++ ;
            }
        }
        cout << res << endl ;
    }
}
