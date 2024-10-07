#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        double x1,x2 ,y1 ,y2 ;
        double dis ;
        cin >> x1 >> y1 >> x2 >> y2 ;
        dis = sqrt( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) ) ;
        cout << setprecision(4) << fixed << dis << endl ;
    }
}
