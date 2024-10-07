#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        char s ;
        cin >> s ;
        if(s <= 'z' && s >= 'a')
        {
            s -= 32 ;
        }
        else
        {
            s += 32 ;
        }
        cout << s << endl ;
    }
}
