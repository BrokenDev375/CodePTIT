#include<bits/stdc++.h>
using namespace std ;
struct point
{
        int x , y , z ;
};
int main()
{
    int t ;
    cin >> t;
    while( t-- )
    {
        point a , b , c , d ;
        cin >> a.x >> a.y >> a.z >> b.x >> b.y >> b.z >> c.x >> c.y >> c.z >> d.x >> d.y >> d.z ;
        long long x1 = b.x - a.x , x2 = c.x - a.x , x3 = d.x - a.x ;
        long long y1 = b.y - a.y , y2 = c.y - a.y , y3 = d.y - a.y ;
        long long z1 = b.z - a.z , z2 = c.z - a.z , z3 = d.z - a.z ;
        if( x1 * y2 * z3 + x2 * y3 *z1 + y1 * z2 * x3 == x3 * y2 * z1 + x2 * y1 * z3 + y3 * z2 * x1)
        {
            cout << "YES" << endl ;
        }
        else
        {
            cout << "NO" << endl ;
        }
    }
}
