#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        cin >> s ;
        long long k , res = 0;
        cin >> k ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            int tmp = s[i] - '0' ;
            res = res *10 + tmp ;
            res %= k ;
        }
        cout << res << endl ;
    }
}
