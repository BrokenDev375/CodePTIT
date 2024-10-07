#include<bits/stdc++.h>
using namespace std ;
int mdd[10000000] ;
int main()
{
    int t;
    cin >> t ;
    cin.ignore(1) ;
    while(t--)
    {
        string s ;
        getline(cin, s) ;
        int k , a = 0;
        cin >> k ;
        cin.ignore(1) ;
        if(s.size() < 26)
        {
            cout << "0" << endl ;
            continue ;
        }
        for( int i = 0 ; i < s.size() ; i++)
        {
            mdd[s[i]]++ ;
        }
        for( int i = 'a' ; i <= 'z' ; i++)
        {
            if(mdd[i] == 0)
            {
                a++ ;
            }
        }
        if( a  <= k)
        {
            cout << "1" << endl ;
        }
        else
        {
            cout << "0" << endl ;
        }
        memset(mdd , 0 , sizeof(mdd)) ;
    }
}
