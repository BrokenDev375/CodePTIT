#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , l , r , check = 1;
        cin >> n ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        cin >> l >> r ;
        int tmp = -1 ;
        for( int i = l ; i <= r ; i++)
        {
            if(a[i] > a[i + 1])
            {
                tmp = i ;
                break ;
            }
        }
        if(tmp != -1)
           for( int i = tmp ; i < r ; i++)
           {
               if( a[i] < a [i + 1])
               {
                   check = 0 ;
                   break ;
               }
           }
        if( check == 0)
        {
            cout << "No" << endl ;
        }
        else
        {
            cout << "Yes" << endl ;
        }
    }
}
