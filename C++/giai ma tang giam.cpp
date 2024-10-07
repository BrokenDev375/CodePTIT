#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        int a = 2 ;
        int cnt = 0 ;
        int pos = 0 ;
        string solve = "1";
        while(a <= s.size() + 1)
        {
            if(s[cnt] == 'D')
            {
                string s1 = to_string(a) ;
                solve.insert(pos , s1)  ;
                a++ ;
                cnt++ ;
            }
            else
            {
                string s1 = to_string(a) ;
                solve += s1 ;
                pos = solve.size() - 1 ;
                a++ ;
                cnt++ ;
            }
        }
        cout << solve << endl ;
    }
}
