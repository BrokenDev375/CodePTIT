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
        int k ;
        cin >> s >> k ;
        int cnt = 0 ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            int j = i ;
            int check = 0 ;
            int a[26] = {} ;
            while(j < s.size() )
            {
                int tmp = s[j] - 'a' ;
                if(a[tmp] == 0)
                {
                    check++ ;
                }
                a[tmp]++ ;
                if(check > k)
                {
                    break ;
                }
                else if(check == k)
                {
                    cnt++ ;
                }
                j++ ;
            }
        }
        cout << cnt << endl ;
    }
}
