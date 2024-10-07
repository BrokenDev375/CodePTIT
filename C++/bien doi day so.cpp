#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        int a[n] ;
        int l = 0 , r = n - 1 ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        int cnt = 0 ;
        while(l <= r)
        {
            if( a[l] < a[r])
            {
                a[l + 1] += a[l] ;
                l++ ;
                cnt++ ;
            }
            else if( a[r] < a[l])
            {
                a[r - 1] += a[r] ;
                r-- ;
                cnt++;
            }
            else
            {
                l++ ;
                r-- ;
            }
        }
        cout << cnt << endl ;
    }
}
