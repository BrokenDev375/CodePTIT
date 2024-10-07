#include<bits/stdc++.h>
using namespace std ;
bool prime(int n )
{
    for( int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            return false ;
        }
    }
    return n > 1 ;
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        long long l , r ;
        cin >> l >> r ;
        int res = 0 ;
        int check = sqrt(l) ;
        if(check * check != l)
        {
            check += 1 ;
        }
        for( int i = check ; i <= sqrt(r) ;i++)
        {
            if(prime(i))
            {
                res++ ;
            }
        }
        cout << res << endl ;
    }
}
