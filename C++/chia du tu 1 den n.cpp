#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long  n , k ;
        cin >> n >> k ;
        long long tmp = n - n / k * k ;
        long long res = k * (k - 1) / 2 * (n / k)   ;
        res += (tmp + 1) * tmp / 2 ;
        cout << res << endl ;
    }
}
