#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        long long a[n] ;
        for( int i= 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            if(a[i] != i)
            {
                for (int j = 0; j < n ; j++ )
            {
                if(a[j] == i)
                {
                    int tmp = a[i] ;
                    a[i] = a[j] ;
                    a[j] = tmp ;
                }
            }
            }
        }
        for( int i = 0 ; i < n ; i++)
        {
            if(a[i] != i)
            {
                a[i] = -1 ;
            }
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
}
