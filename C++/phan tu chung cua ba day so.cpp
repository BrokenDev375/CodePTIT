#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int m , n , p , check = 0;
        cin >> m >> n >> p ;
        vector<long long> v1 , v2 , v3 ;
        for( int i = 0 ; i < m ; i++)
        {
            long long tmp ;
            cin >> tmp ;
            v1.push_back(tmp) ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            long long tmp ;
            cin >> tmp ;
            v2.push_back(tmp) ;
        }
        for( int i = 0 ; i < p; i++)
        {
            long long tmp ;
            cin >> tmp ;
            v3.push_back(tmp) ;
        }
        int p1 = 0 ,  p2 =  0 , p3 = 0 ;
        while(p1 < m && p2 < n && p3 < p)
        {
            if(v1[p1] == v2[p2] && v1[p1] == v3[p3])
            {
                cout << v1[p1] << " " ;
                check = 1 ;
                p1++ ;
                p2++ ;
                p3++ ;
            }
            else if(v1[p1] > v2[p2])
            {
                p2++ ;
            }
            else if(v1[p1] > v3[p3])
            {
                p3++ ;
            }
            else
            {
                p1++ ;
            }
        }
        if(!check)
        {
            cout << "-1" ;
        }
        cout << endl ;
    }
}
