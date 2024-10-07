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
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n) ;
        int b[n] ;
        int cnt = 0 ;
        for( int i = 0 ; i < n ; i += 2)
        {
            b[i] = a[cnt++] ;
        }
        for( int i = 1 ; i < n ; i += 2)
        {
            b[i] = a[cnt++] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            cout << b[i] << " " ;
        }
        cout << endl ;
    }
}
