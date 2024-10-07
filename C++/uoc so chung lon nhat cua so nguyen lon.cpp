#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        long long a , b = 0;
        string s ;
        cin >> a >> s ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            b = b * 10 +( s[i] - '0' );
            b = b % a ;
        }
        cout << __gcd(a , b) << endl ;
    }
}
