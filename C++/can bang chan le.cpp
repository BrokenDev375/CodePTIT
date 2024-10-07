#include<bits/stdc++.h>
using namespace std ;
bool isBalance( int n )
{
    int odd = 0 , oven = 0 ;
    while( n > 0)
    {
        int tmp = n % 10 ;
        if( tmp % 2 == 0)
        {
            oven++ ;
        }
        else
        {
            odd++ ;
        }
        n /= 10 ;
    }
    if(oven == odd)
    {
        return true ;
    }
    return false ;
}
int main()
{
    int t ;
    cin >> t ;
    int r , l ;
    l = pow(10 , t - 1) ;
    r= pow(10 , t) - 1 ;
    int endline = 0 ;
    for( int i = l ; i < r ; i++)
    {
        if(isBalance(i))
        {
            endline++ ;
            if( endline % 10 == 0)
            {
                cout << i << endl ;
            }
            else
            {
                cout << i << " " ;
            }
        }
    }
}
