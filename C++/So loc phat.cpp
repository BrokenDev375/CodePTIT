#include<bits/stdc++.h>
using namespace std ;
bool locphat( long long n)
{
    while(n > 0)
    {
        int x = n % 10 ;
        if( x != 6 && x != 8 && x != 0)
        {
            return false ;
        }
        n /= 10 ;
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
        if(locphat(n))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
