#include<bits/stdc++.h>
using namespace std ;
bool a[10000000] ;
void eratos()
{
    for( int i = 0 ; i < (10000000) ; i++)
    {
        a[i] = true ;
    }
    for( int i = 2 ; i < sqrt(10000000) ; i++)
    {
        if(a[i])
        {
            for( int j = i * i ; j < 100000 ; j += i)
            {
                a[j] = false ;
            }
        }
    }
}

int main()
{
    eratos() ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        for( int i = 1 ; i <= n ; i++)
        {
            if(i == 1 )
            {
                cout << 1 << " " ;
                continue ;
            }
            for( int j = 2 ; j <= i ; j++)
            {
                if(a[j] && i % j == 0)
                {
                    cout << j << " " ;
                    break ;
                }
            }
        }
        cout << endl ;
    }
}
