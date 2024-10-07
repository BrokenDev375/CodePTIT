#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s1 ;
        cin >> s1 ;
        int sum = 0 ;
        for( int i = 0 ; i < s1.size() ;)
        {
            if( s1[i] >= '0' && s1[i] <= '9')
            {
                int tmp = s1[i] - '0' ;
                sum += tmp ;
                s1.erase(i , 1) ;
            }
            else
            {
                i++ ;
            }
        }
        string s2 = to_string(sum) ;
        sort( s1.begin() , s1.end()) ;
        s1 += s2 ;
        cout << s1 << endl ;
    }
}
