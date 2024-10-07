#include<bits/stdc++.h>
using namespace std ;
const int CHAR_COUNT = 256 ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s1 , s2 ;
        cin >> s1 >> s2 ;
        int cnt = 0 ;
        int minlen = INT_MAX ,  left = 0 , start = -1;
        vector<int> cnts2(CHAR_COUNT , 0 ) , windowslide(CHAR_COUNT , 0) ;
        for( int i = 0 ; i < s2.size() ;i++)
        {
            cnts2[s2[i]]++ ;
        }
        for( int i = 0 ; i < s1.size() ; i++)
        {
            windowslide[s1[i]]++ ;
            if( cnts2[s1[i]] != 0 && windowslide[s1[i]] <= cnts2[s1[i]] )
            {
                cnt++ ;
            }
            if( cnt == s2.size())
            {
               while(windowslide[s1[left]] > cnts2[s1[left]] || cnts2[s1[left]] == 0)
               {
                   windowslide[s1[left]]-- ;
                   left++ ;
               }
                int tmp = i - left + 1 ;
                if(minlen > tmp)
                {
                    minlen = min(minlen , tmp) ;
                    start = left ;
                }
            }
        }
        if( start == -1)
        {
            cout << -1 << endl ;
        }
        else
        {
            cout << s1.substr(start , minlen) << endl ;
        }
    }
}
