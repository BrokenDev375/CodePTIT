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
        int a[n] , b[n] ;
        for( int i = 0; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for( int i = 0; i < n ; i++)
        {
            cin >> b[i] ;
        }
        int maxx = 0 , mdd1[n]= {} , mdd2[n] = {} ;
        for( int i = 0 ; i < n  ;i++)
        {
            for( int j = i  ; j < n ; j++ )
            {
                mdd1[i] += a[j] ;
                mdd2[i] += b[j] ;
                if(mdd1[i] == mdd2[i])
                {
                    maxx = max( maxx , j - i + 1) ;
                }

            }
        }
        cout << maxx << endl ;
    }
}
