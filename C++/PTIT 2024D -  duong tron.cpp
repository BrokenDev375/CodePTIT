#include<bits/stdc++.h>
using namespace std ;
int main()
{
    double x , y , r ;
    cin >> x >> y >> r ;
    long long res = 0 ;
    long long lx = floor(x - r) , rx = ceil(x + r) , ly = floor(y - r) , ry = ceil(y + r) ;
    for(long long i = lx ; i <= rx ; i++)
    {
        if(r * r - (i - x) * (i - x) >= 0)
        {
            long long left = ceil( y - sqrt(r * r - (i - x) * (i - x))  ) ;
            long long right = floor(y + sqrt( r * r - (i - x) * (i - x)))  ;
            left = max(ly , left) ;
            right = min(ry , right) ;
            if(left <= right)
            {
               res += right - left + 1 ;
            }
        }
    }
    cout << res ;
}
