#include<bits/stdc++.h>
using namespace std ;
long long a[1000000] ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        long long dis = 1e9 ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n) ;
        for( int i = 0 ; i < n - 1 ; i++)
        {
           dis = min(dis , abs(a[i] - a[i + 1])) ;
        }
        cout << dis << endl ;
    }
}
