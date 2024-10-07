#include<bits/stdc++.h>
using namespace std ;
int mdd[26] ;
int main()
{
    int t;
    cin >> t;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        getline(cin , s) ;
        for( int i = 0 ; i < s.size() ; )
        {
            int tmp = i + 1 ;
            int cnt = 1 ;
            while(s[i] == s[tmp] && tmp < s.size())
            {
                cnt++ ;
                tmp++ ;
            }
            cout << s[i] << cnt  ;
            i += cnt ;
        }
        cout << endl ;
    }
}
