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
        vector <int> a(n) ;
        for( int i = 0; i < n ; i++)
        {
            cin >> a[i] ;
        }
        int i = n - 1 ;
        for( ; i > 0 ; i--)
        {
            if(a[i - 1] > a[i] )
            {
                for( int j = n - 1 ; j >= i ; j--)
                {
                    if( a[j] < a[i - 1])
                    {
                        swap(a[j] , a[i - 1]) ;
                        break ;
                    }
                }
                break ;
            }
        }
        reverse(a.begin() + i , a.end()) ;
        for( int i = 0 ; i < n ; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
}
