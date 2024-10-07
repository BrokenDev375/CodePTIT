#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        int a[n][n] , b[n][100005] = {} ;
        for( int i = 0 ; i < n ; i++)
        {
            for( int j = 0 ; j < n ; j++)
            {
                cin >> a[i][j] ;
                b[i][a[i][j]]++ ;
            }
        }
        int cnt = 0 ;
        for( int i = 0 ; i < n ; i++)
        {
            int check = 1 ;
            for(int j = 0 ; j < n ; j++)
            {
                if(b[j][a[0][i]] == 0)
                {
                    check = 0 ;
                }
                else
                {
                    b[j][a[0][i]] = 0 ;
                }

            }
            if(check == 1)
            {
                cnt++ ;
            }
        }
        cout << cnt << endl ;
    }
}
