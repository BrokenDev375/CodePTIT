#include<bits/stdc++.h>
using namespace std ;
int x ;
bool cmp(int a , int b )
{
    int tmp1 = abs(a - x) ;
    int tmp2 = abs(b - x) ;
    return  tmp1 < tmp2 ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n  ;
        cin >> n >> x ;
        vector<int> a ;
        for( int i = 0 ; i < n ; i++)
        {
            int tmp ;
            cin >> tmp ;
            a.push_back(tmp) ;
        }
        stable_sort(a.begin() , a.end() , cmp) ;
        for( int i = 0 ; i < n ; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
}
