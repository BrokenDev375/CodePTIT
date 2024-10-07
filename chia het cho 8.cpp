#include<bits/stdc++.h>
using namespace std ;
int solve(string s, int n)
{
    int res = 0;
    for( int i = 0 ; i < s.size() ; i++)
    {
        int tmp = 0 ;
        for(int j = i ; j < s.size() ; j++)
        {
            tmp = tmp * 10 + (s[j] - '0' ) ;
            tmp %= n ;
            if (tmp == 0)
            {
                res++ ;
            }
        }
    }
    return res ;
}
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        string s ;
        cin >> s ;
        cout << solve(s , 8) - solve(s , 24) << endl ;
    }
}
