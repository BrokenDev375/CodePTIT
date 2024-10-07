#include<bits/stdc++.h>
using namespace std ;
int right_tri(long long a , long b)
{
    long long c = a * a + b * b ;
    long long tmp = sqrt(c) ;
    if(tmp * tmp == c)
    {
        return tmp ;
    }
    return 0 ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , check = 0 ;
        cin >> n ;
        set<long long> se ;
        for( int i = 0 ; i < n ; i++ )
        {
            long long tmp ;
            cin >> tmp ;
            se.insert(tmp) ;
        }
        for( auto it1 = se.begin() ; it1 != se.end() ; it1++)
        {
            auto it2 = next(it1) ;
            for( ; it2 != se.end() ; it2++ )
            {
                long long tmp = right_tri(*it1 , *it2) ;
                if( tmp != 0 && binary_search(it2 , se.end() , tmp))
                {
                    check = 1 ;
                }
            }
        }
        if(check)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
