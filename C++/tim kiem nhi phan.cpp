#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , x , check = 0;
        cin >> n >> x;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n) ;
        int l = 0 , r = n - 1 ;
        while( l <= r )
        {
            int mid = (l + r ) / 2 ;
            if( a[mid] == x)
            {
                cout << 1 << endl ;
                check = 1 ;
                break ;
            }
            else if( a[ mid ] < x)
            {
                l = mid + 1 ;
            }
            else
            {
                r = mid - 1 ;
            }
        }
        if( check == 0)
        {
            cout << -1 << endl ;
        }
    }
}
