#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int m ,  k;
        cin >> m >> k ;
        int a[ m * m] ;
        for( int i = 0 ; i < m * m ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + m * m) ;
        cout << a[k - 1] << endl ;
    }
}
