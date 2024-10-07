#include<bits/stdc++.h>
using namespace std ;
bool prime(int n)
{
    for( int i = 2 ; i <= sqrt(n) ;i++)
    {
        if(n % i == 0)
        {
            return false ;
        }
    }
    return n > 1 ;
}
int SumOfDigit(int n)
{
    int res = 0 ;
    while( n > 0)
    {
        res += (n % 10) ;
        n /= 10 ;
    }
    return res ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        if(prime(n))
        {
            cout << "NO" << endl ;
            continue ;
        }
        int res2 = SumOfDigit(n) ;
        int res = 0 ;
        for( int i = 2 ; i <= sqrt(n) ; i++)
        {
            if(n % i == 0)
            {
                if(prime(i))
                {
                    while(n % i == 0)
                    {
                        res += SumOfDigit(i) ;
                        n /= i ;
                    }

                }
            }
        }
        if(n > 0)
        {
            if(prime(n))
            {
                res += SumOfDigit(n) ;
            }
        }
        if(res == res2)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
