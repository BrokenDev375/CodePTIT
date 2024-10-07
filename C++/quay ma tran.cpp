#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int m , n ;
        cin >> m >> n ;
        int a[m][n] , b[n][m] = {};
        for( int i = 0 ; i < m ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j] ;
            }
        }
        int top = 0 , bot = m - 1 , left = 0 , right = n - 1 ;
        while(top <= bot && left <= right)
        {
            for( int i = left ; i < right ; i++)
            {
                b[top][i + 1] = a[top][i] ;
            }
            for( int i = top ; i < bot ; i++)
            {
                b[i + 1][right] = a[i][right] ;
            }
            for( int i = right ; i > left ; i--)
            {
                b[bot][i - 1] = a[bot][i] ;
            }
            for( int i = bot ; i > top ; i--)
            {
                b[i - 1][left] = a[i][left] ;
            }
            top++ ;
            bot-- ;
            left++ ;
            right-- ;
        }
        for( int i = 0 ; i < m ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                if(b[i][j] == 0)
                {
                    cout << a[i][j] << " " ;
                }
                else
                {
                    cout << b[i][j] << " " ;
                }
            }
        }
        cout << endl ;
    }
}
