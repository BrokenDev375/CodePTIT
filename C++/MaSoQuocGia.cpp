#include<bits/stdc++.h>
using namespace std ;
int erase_nat_code(string s )
{
        for( int i = 0 ; i < s.size() ; i++)
        {
            if( s[i] == '0')
            {
                if(s[i + 1] == '8')
                {
                    if( s[i + 2] == '4')
                    {
                        return i;
                    }
                }
            }
        }
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string nat_code ;
        cin >> nat_code ;
        nat_code.erase(erase_nat_code(nat_code),3) ;
        cout << nat_code << endl;
    }
}
