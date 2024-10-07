#include<bits/stdc++.h>
using namespace std ;
string solve(string s)
{
    int a[10] = {} ;
    if(s[0]== '0')
    {
        return "INVALID" ;
    }
    for( int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] > '9' || s[i] < '0')
        {
            return "INVALID" ;
        }
        int tmp = s[i] - '0' ;
        a[tmp]++ ;
    }
    for( int i = 0 ; i < 9 ; i++)
    {
        if(a[i] == 0)
        {
            return "NO" ;
        }
    }
    return "YES" ;
}
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        getline(cin , s) ;
        cout << solve(s) << endl ;
    }
}
