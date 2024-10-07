#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        long long a , x , y ;
        cin >> a >> x >> y ;
        int cnt = __gcd(x , y) ;
        while(cnt--)
        {
            cout << a ;
        }
        cout << endl ;
    }
}
