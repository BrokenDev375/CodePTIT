#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int a[n][n] , b[n * n] , cnt = 0 ;;
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j] ;
            b[cnt] = a[i][j] ;
            cnt++ ;
        }
    }
    sort(b , b + n * n) ;
    cnt = 0 ;
    int top = 0 , bot = n - 1 , left = 0 , right = n - 1 ;
    while(top <= bot && left <= right)
    {
        for( int i = left ; i <= right ; i++)
        {
            a[top][i] = b[cnt++] ;
        }
        top++ ;
        for( int i = top ; i <= bot ; i++)
        {
            a[i][right] = b[cnt++] ;
        }
        right-- ;
        for( int i = right ; i >= left ; i--)
        {
            a[bot][i] = b[cnt++] ;
        }
        bot-- ;
        for( int i = bot ; i >= top ; i--)
        {
            a[i][left] = b[cnt++] ;
        }
        left++ ;
    }
    for( int i = 0 ; i < n ; i++)
    {
        for( int j = 0 ; j < n ; j++)
        {
            cout << a[i][j] << " " ;
        }
        cout << endl ;
    }
}
