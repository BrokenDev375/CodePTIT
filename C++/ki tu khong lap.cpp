#include<bits/stdc++.h>
using namespace std ;
int mdd[10000000] ;
int main()
{
    int t ;
    cin >> t ;
    cin.ignore(1) ;
    while(t--)
    {
        string s ;
        getline(cin, s) ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            mdd[s[i]]++ ;
        }
        for( int i = 0 ; i < s.size() ; i++)
        {
            if(mdd[s[i]] == 1)
            {
                cout << s[i] ;
            }
        }
        cout << endl ;
        memset(mdd , 0 , sizeof(mdd)) ;
    }
}
