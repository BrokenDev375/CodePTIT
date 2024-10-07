#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    cin.ignore(1) ;
    while(t--)
    {
        int cnt = 1 ;
        string s ;
        getline(cin , s) ;
        for( int i = 0; i < s.size() ; i++)
        {
            if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            {
                cnt++ ;
            }
        }
        cout << cnt << endl ;
    }
}
