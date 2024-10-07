#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int check = 1 ;
        int sum = 0 ;
        while(check == 1)
        {
            sum += n % 10 ;
            n /= 10 ;
            if( n == 0)
            {
                if( sum < 10)
                {
                    check = 0 ;
                    cout << sum << endl ;
                }
                else
                {
                    n = sum ;
                    sum = 0 ;
                }
            }
        }
    }
}
