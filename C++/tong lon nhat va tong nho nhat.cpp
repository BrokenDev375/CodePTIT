#include<bits/stdc++.h>
using namespace std ;
long long maxx( string s)
{
    for( int i = 0 ; i < s.size() ; i++)
    {
        if( s[i] == '5')
        {
            s[i] = '6' ;
        }
    }
    return stoll(s) ;
}
long long minn( string s)
{
    for( int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '6')
        {
            s[i] = '5' ;
        }
    }
    return stoll(s) ;
}
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string s1 , s2 ;
        cin >> s1 >> s2 ;
        cout << minn(s1) + minn(s2)  << " " << maxx(s1) + maxx(s2)<< endl ;
    }
}
