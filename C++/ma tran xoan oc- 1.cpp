#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int m , n ;
        cin >> m >> n ;
        int a[m][n] ;
        for( int i = 0 ; i < m ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j] ;
            }
        }
        int top = 0 , bot = m - 1 ,left = 0 , right = n - 1 ;
        while(top <= bot && left <= right)
        {
            for( int i = left ; i <= right ; i++)
            {
                cout << a[top][i] << " " ;
            }
            top++ ;
            if(top > bot)
            {
                break ;
            }
            for( int i = top ; i <= bot ; i++)
            {
                cout << a[i][right] << " " ;
            }
            right-- ;
            if( left > right)
            {
                break ;
            }
            for( int i = right ; i >= left ; i--)
            {
                cout << a[bot][i] << " " ;
            }
            bot-- ;
            if( top > bot)
            {
                break ;
            }
            for( int i = bot ; i >= top ; i--)
            {
                cout << a[i][left] << " " ;
            }
            left++ ;
            if(left > right)
            {
                break ;
            }
        }
        cout << endl ;
    }
}
