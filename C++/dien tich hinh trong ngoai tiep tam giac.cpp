#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct triangle
{
    double x , y ;
};
bool check(struct triangle a , struct triangle b , struct triangle c)
{
    return((a.x - b.x) * (a.y - c.y) != (a.x - c.x) * (a.y - b.y)) ;
}
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        struct triangle a , b , c ;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y ;
        if(!check( a , b , c ))
        {
            cout << "INVALID" << endl ;
        }
        else
        {
            double edge1 , edge2 , edge3 ;
            edge1 = sqrt((a.x - b.x)*(a.x - b.x) +(a.y - b.y) * ( a.y - b.y)) ;
            edge2 = sqrt((a.x - c.x)*(a.x - c.x) +(a.y - c.y) * ( a.y - c.y)) ;
            edge3 = sqrt((c.x - b.x)*(c.x - b.x) +(c.y - b.y) * ( c.y - b.y)) ;
            double s = 1 * 0.25 *sqrt((edge1 + edge2 + edge3) * ( - edge1 + edge2 + edge3) * (edge1 + edge2 - edge3) * (edge1 - edge2 + edge3) ) ;
            double r = edge1 * edge2 * edge3 / (4 * s) ;
            cout << fixed << setprecision(3) << r * r * PI << endl ;
        }
    }
}
