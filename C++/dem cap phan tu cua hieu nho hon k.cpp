#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ,k ;
        cin >> n >> k ;
        int a[n] ;
        long long cnt = 0 ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n) ;
        for(int i = 0 ; i < n ; i++)
        {
            int x = upper_bound(a + i + 1, a + n , a[i] + k - 1 ) - (a + i + 1) ;
            cnt += x ;
        }
        cout << cnt << endl ;
    }
}
