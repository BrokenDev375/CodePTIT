#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int m , n ;
    cin >> m ;
    int a[m][m] ;
    for( int i = 0 ; i < m ; i++)
    {
        for( int j = 0 ; j < m ; j++)
        {
            cin >> a[i][j] ;
        }
    }
    cin >> n ;
    int b[n][n] , c[m][m] ;
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < n ; j++)
        {
            cin >> b[i][j] ;
        }
    }
    for( int i = 0 ; i < m ; i++)
    {
        int tmp1 = i % n ;
        for( int j = 0 ; j < m ; j++)
        {
            int tmp2 = j % n ;
            c[i][j] = a[i][j] * b[tmp1][tmp2] ;
        }
    }
    for( int i = 0 ; i < m ; i++)
    {
        for( int j = 0 ; j < m ; j++)
        {
            cout << c[i][j] << " " ;
        }
        cout << endl ;
    }
}
