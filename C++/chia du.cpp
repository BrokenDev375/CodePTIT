#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int check = 0 , cnt = 1;
        int a , m ;
        cin >> a >> m ;
        int tmp = a ;
        while( (a * cnt ) % m != 0)
        {
            if((a * cnt) % m == 1)
            {
                check = 1 ;
                cout << cnt << endl ;
                break ;
            }
            cnt++ ;
        }
        if( check == 0)
        {
            cout << "-1" << endl ;
        }
    }
}
