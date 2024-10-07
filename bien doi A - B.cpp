#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    int cntA = 0 , cntB = 0 ;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == 'A')
        {
            if( cntA < cntB )
            {
                cntB = cntA + 1;
            }
            else
            {
                cntB++ ;
            }
        }
        else
        {
            if(cntA < cntB)
            {
                cntA++ ;
            }
            else
            {
                cntA = cntB + 1 ;
            }
        }
    }
    cout << cntA ;
}
