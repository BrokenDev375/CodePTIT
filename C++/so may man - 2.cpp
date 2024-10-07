#include<bits/stdc++.h>
using namespace std ;
bool solve( string s)
{
    long long res = 0 ;
    for( int i = 0 ; i < s.size() ; i++)
    {
        res += s[i] - '0' ;
    }
    if(res < 10)
    {
        return res == 9 ;
    }
    else
    {
        return solve(to_string(res)) ;
    }
}
int main()
{
    int t ;
    cin >> t;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        getline(cin , s) ;
        if(solve(s))
        {
            cout << 1 << endl ;
        }
        else
        {
            cout << 0 << endl ;
        }
    }
}
