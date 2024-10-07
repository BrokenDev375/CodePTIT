#include<bits/stdc++.h>
using namespace std ;
struct time
{
    int hour , minute , second ;
};
bool cmp(struct time a , struct time b)
{
    if(a.hour == b .hour)
    {
        if(a.minute == b.minute)
        {
            return a.second < b.second ;
        }
        return a.minute < b.minute ;
    }
    return a.hour < b.hour ;
}
int main()
{
    int t ;
    cin >> t ;
    struct time f[5000] ;
    for( int i = 0 ; i < t ; i++)
    {
        cin >> f[i].hour >> f[i].minute >> f[i].second ;
    }
    sort(f , f + t , cmp) ;
    for(int i = 0 ; i < t ; i++)
    {
        cout << f[i].hour << " " << f[i].minute << " " << f[i].second << endl ;
    }
}
