#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        string s (n , '0') ;
        for( int i = 0 ; i < pow(2,n) ; i++)
        {
            cout << s << " " ;
            for( int j = n - 1 ; j >= 0 ; j--)
            {
                if(s[j] == '0')
                {
                    s[j] = '1' ;
                    break ;
                }
                else
                {
                    s[j] = '0';
                }
            }
        }
        cout << endl ;
    }
}
