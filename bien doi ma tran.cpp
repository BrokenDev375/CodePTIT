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
        int a[n][n] , col[n] = {} , row[n] = {} , maxx = 0 , res = 0 ;
        for( int i = 0 ; i < n ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j] ;
                row[i] += a[i][j] ;
                col[j] += a[i][j] ;
            }
        }
        sort(row , row + n) ;
        sort(col , col + n) ;
        int check ;
        if( row[n - 1] >  col[n - 1])
        {
            maxx = row[n - 1] ;
            check = 0 ;
        }
        else
        {
            maxx = col[n - 1] ;
            check = 1 ;
        }
        if( check )
        {
            for( int i = 0 ; i < n ; i++)
            {
                res += maxx - row[i] ;
            }
        }
        else
        {
            for( int i = 0 ; i < n ; i++)
            {
                res += maxx - col[i] ;
            }
        }
        cout << res << endl ;
    }
}
