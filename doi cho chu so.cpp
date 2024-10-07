#include<bits/stdc++.h>
using namespace std ;
string solve(string s)
{
    int i = s.size() - 2 ;
    while( s[i] <= s[i + 1])
    {
        i-- ;
        if(i < 0)
        {
            return "-1" ;
        }
    }
    int maxx = -1 ;
    int index ;
    for( int j = i + 1 ;  j < s.size() ; j++)
    {
        int tmp = s[j] - '0' ;
        if(s[i] > s[j] && tmp > maxx)
        {
            maxx =  tmp ;
            index = j ;
        }
    }
    swap(s[i] , s[index]) ;
    return s ;
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
