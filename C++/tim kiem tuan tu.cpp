#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , x , check = 0;
        cin >> n >> x ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            if( a[i] == x && check == 0)
            {
                cout << i + 1 << endl ;
                check = 1 ;
            }
        }
        if( check == 0)
        {
            cout << -1 << endl ;
        }
    }
}
