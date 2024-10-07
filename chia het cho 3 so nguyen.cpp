#include<bits/stdc++.h>
using namespace std ;
long long lcm(long long a , long long b)
{
    return a / __gcd(a , b) * b ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long x , y , z , n ;
        cin >> x >> y >> z >> n ;
        long long res = lcm(lcm(x , y) , z) ;
        long long l = pow(10, n - 1) , r = pow(10 , n) - 1 ;
        if(l % res == 0)
        {
            res = l ;
        }
        else
        {
          res =  (l / res + 1) * res ;
        }
        if(res > r)
        {
            cout << -1 << endl ;
        }
        else
        {
            cout << res << endl ;
        }
    }
}
