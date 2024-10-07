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
        int a[m][n] ;
        for( int i = 0 ; i < m ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j] ;
            }
        }
        int b[m][n] = {} ;
        for( int j = 0 ;  j < n ; j++)
        {
            for(int i = 0 ; i < m ; i++)
            {
                if( i == 0)
                {
                    if(a[i][j] == 1)
                    {
                        b[i][j] = 1 ;
                    }
                }
                else
                {
                    if(a[i][j] == 1)
                    {
                        b[i][j] = b[i - 1][j] + 1 ;
                    }
                }
            }
        }
        int maxx = 0 , area ;
        for( int i = 0 ; i < m ; i++)
        {
            sort(b[i] , b[i] + n , greater<int>()) ;  // push all the column with "1" to the left
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // The area is calculated as height (b[i][j]) * width (j + 1)
                int area = b[i][j] * (j + 1);
                maxx = max(maxx, area);
            }
        }
       cout << maxx << endl ;
    }
}
