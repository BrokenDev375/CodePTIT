#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , m;
        cin >>m >>  n  ;
        int a[m][n] ;
        for( int i = 0 ; i < m ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j] ;
            }
        }
        int b[3][3] ;
        for( int i = 0 ;i < 3 ; i++)
        {
            for( int j = 0 ; j < 3 ; j++)
            {
                cin >> b[i][j] ;
            }
        }
        int res[m - 2][n - 2] = {} ;
        for(int i = 0 ; i < m - 2 ; i++)
        {
            for( int j = 0 ; j < n - 2 ; j++)
            {
                for(int k = 0 ; k < 3 ; k++ )
                {
                    for( int l = 0 ; l < 3 ; l++)
                    {
                        res[i][j] += a[k + i][ l + j] * b[k][l] ;
                    }
                }
            }
        }
        long long sum = 0 ;
        for( int i = 0 ; i < m - 2 ; i++)
        {
            for( int j = 0 ; j < n - 2 ;j++)
            {
                sum += res[i][j] ;
            }
        }
        cout << sum << endl ;
    }
}
