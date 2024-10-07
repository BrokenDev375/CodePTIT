#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        int a[n] , b[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            b[i] = a[i] ;
        }
        sort( b , b + n) ;
        int l = 0 , r = n - 1 ;
        while(l < r)
        {
            if(a[l] == b[l])
            {
                l++ ;
            }
            else if(a[r] == b[r])
            {
                r-- ;
            }
            else
            {
                break ;
            }
        }
        cout << l + 1 << " " << r + 1 << endl ;
    }
}
