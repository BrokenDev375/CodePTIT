#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        vector<int> v(n) , sum(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i] ;
            sum[i] = v[i] ;
        }
        for( int i = 1 ; i < n ;i++)
        {
            for( int j = 0 ; j < i ; j++)
            {
                if(v[j] < v[i])
                {
                    sum[i] = max(sum[i] , sum[j] + v[i]) ;
                }
            }
        }
        sort(sum.begin() , sum.end() ) ;
        cout << sum[n - 1] << endl ;
    }
}
