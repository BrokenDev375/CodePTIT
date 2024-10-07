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
        getline(cin , s) ;
        int tmp = 0 ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '1')
            {
                if( (s.size() - i) % 4 == 0)
                {
                    tmp += 1 ;
                }
                else if( (s.size() - i) % 4 == 1)
                {
                    tmp += 2 ;
                }
                else if ((s.size() - i) % 4 == 2)
                {
                    tmp += 4 ;
                }
                else
                {
                    tmp += 3 ;
                }
            }
        }
        if(tmp % 5 == 0)
        {
            cout << "Yes" << endl ;
        }
        else
        {
            cout << "No" << endl ;
        }
    }
}

