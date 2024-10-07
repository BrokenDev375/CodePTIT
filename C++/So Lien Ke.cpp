#include<bits/stdc++.h>
using namespace std ;
bool IsNextTo( long long n)
{
    int r = n % 10 ;
    n /= 10 ;
    while(n > 10)
    {
       int l = n % 10 ;
        if( abs(l - r) != 1)
        {
            return false ;
        }
        r = l ;
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
        if( IsNextTo(n))
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
