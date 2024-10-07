#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    cin.ignore(1) ;
    while( t--)
    {
        string s ;
        getline(cin, s) ;
        int sum = 0 ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            if(i % 2 == 0)
            {
                sum += s[i] - '0' ;
            }
            else
            {
                sum -= s[i] - '0' ;
            }
        }
        if( abs(sum) % 11 == 0)
        {
            cout << 1 << endl ;
        }
        else
        {
            cout << 0 << endl ;
        }
    }
}
