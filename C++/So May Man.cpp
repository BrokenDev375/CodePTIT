#include<bits/stdc++.h>
using namespace std ;
bool IsLuckyNumber(long long n)
{
    if( n % 10 != 6)
    {
        return false ;
    }
    n /= 10 ;
    if( n % 10 !=8)
    {
        return false ;
    }
    return true ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long n ;
        cin >> n ;
        if(IsLuckyNumber( n ))
        {
            cout << "1" << endl ;
        }
        else
        {
            cout << "0" << endl ;
        }
    }
}
