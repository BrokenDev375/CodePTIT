#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , check = 0;
        cin >> n ;
        int a[n] ;
        for( int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            for( int j = 0 ; j < i ; j++)
            {
                if(a[j] == a[i])
                {
                    cout << a[i] << endl;
                    check = 1 ;
                    break ;
                }
            }
            if(check == 1)
            {
                break ;
            }
        }
        if(check == 0)
        {
            cout << -1 << endl ;
        }
    }
}
