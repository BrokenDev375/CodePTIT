#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    for( int i = 1 ; i <= n ; i++)
    {
        for( int j = i ; j < n ; j++)
        {
            cout << " " ;
        }
        if(i == 1)
        {
            cout << "*" ;
        }
        else if( i == n )
        {
            for( int j = 1 ; j <= i  ; j++)
            {
                cout << "* " ;
            }
        }
        else
        {
            for( int j = 1 ; j < i * 2; j++)
            {
                if(j  == 1 || j == i * 2 - 1 )
                {
                    cout << "*" ;
                }
                else
                {
                    cout << " " ;
                }
            }
        }
        cout << endl ;
    }
}
