#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n , k ;
        cin >> n >> k ;
        int a[n] ;
        int cnt = 0 ;
        for ( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            if(a[i] <= k)
            {
                cnt++ ;
            }
        }
        int window[n - cnt + 1] = {} ;
        for( int i = 0 ; i < cnt ; i++)
        {
            if(a[i] <= k)
            {
                window[0]++ ;
            }
        }
        for (int i = cnt ; i < n ; i++ )
        {
            int tmp = window[i - cnt] ;
            if(a[i - cnt] <= k)
            {
                tmp-- ;
            }
            if(a[i] <= k)
            {
                tmp++ ;
            }
            window[i - cnt + 1] = tmp ;
        }
        sort(window , window + n - cnt + 1) ;
        cout << cnt - window[n - cnt] << endl ;
    }
}
