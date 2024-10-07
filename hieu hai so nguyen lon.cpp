#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string s1 , s2 ;
        string res = "" ;
        cin >> s1 >> s2 ;
        if(s1.size() < s2.size())
        {
            swap(s1 , s2) ;
        }
        else if(s1 < s2 && s1.size() == s2.size())
        {
            swap(s1 , s2) ;
        }
        int cnt = s1.size() - 1;
        int remember = 0 ;
        for( int i = s2.size() - 1; i >= 0 ; i--)
        {
            int tmp1 = s1[cnt] - '0' ;
            int tmp2 = s2[i] - '0' ;
            int tmp = tmp1 - tmp2 - remember ;
            if(tmp < 0)
            {
                tmp += 10 ;
                remember = 1 ;
            }
            else
            {
                remember = 0 ;
            }
            char tmp_char = tmp + '0' ;
            res = tmp_char + res ;
            cnt-- ;
        }

        for( int i = cnt ; i >= 0 ; i--)
        {
            int tmp1 = s1[i] - '0' ;
            tmp1 -= remember ;
            if(tmp1 < 0)
            {
                tmp1 += 10 ;
                remember = 1 ;
            }
            else
            {
                remember = 0 ;
            }
            char tmp_char = tmp1 + '0' ;
            res = tmp_char + res ;
        }
        cout << res << endl ;
    }
}
