#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    cin.ignore() ;
    while(t--)
    {
        string s;
        getline(cin , s) ;
        long long sum = 0 ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            long long res = 0 ;
            while(s[i] <= '9' && s[i] >= '0' && i < s.size())
            {
                int tmp = s[i] - '0' ;
                res = res * 10 + tmp ;
                i++ ;
            }
            sum += res ;
        }
        cout << sum << endl ;
    }
}
