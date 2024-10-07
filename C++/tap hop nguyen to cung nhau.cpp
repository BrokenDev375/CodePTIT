#include<bits/stdc++.h>
using namespace std ;
bool solve(long long n , long long m)
{
    long long sum = (n + 1) * n / 2;
    if((sum + m) % 2 != 0 || sum < m)
    {
        return false ;
    }
    long long a = (sum + m) / 2  ;
    long long b = sum - a ;
    if(__gcd(a , b) != 1)
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
        long long n , m ;
        cin >> n >> m;
        if(solve(n , m))
        {
            cout << "Yes" << endl ;
        }
        else
        {
            cout << "No" << endl ;
        }
    }
}
