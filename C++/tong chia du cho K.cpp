#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , k ;
        cin >> n >> k ;
        int tmp , sum = 0 ;
        sum = (k - 1) * k / 2 *(n / k) * k ;
        tmp = n - (n / k) * k ;
        sum += (tmp + 1) * tmp / 2 ;
        if( sum == k)
        {
            cout << "1" << endl ;
        }
        else
        {
            cout << "0" << endl ;
        }
    }
}
