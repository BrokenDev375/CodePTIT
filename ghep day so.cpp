#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int  t;
    cin >> t ;
    while(t--)
    {
        int k , n ;
        cin >> k >> n ;
        int a[k * n] ;
        for( int i = 0 ; i < k * n ; i++)
        {
            cin >> a[i] ;
        }
        sort(a , a + n * k) ;
        for( int i = 0 ; i < k * n ; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
}
