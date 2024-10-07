#include<bits/stdc++.h>
using namespace std ;
struct item
{
    int id ;
    string name , type ;
    double buy_in , sell_out , profit ;
};
bool cmp(struct item a , struct item b)
{
    return a.profit > b.profit ;
}
int main()
{
    int t ;
    struct item ds[100] ;
    cin >> t;
    for(int i = 1 ; i <= t ; i++)
    {
        cin.ignore() ;
        getline(cin , ds[i].name) ;
        getline(cin , ds[i].type) ;
        cin >> ds[i].buy_in ;
        cin >> ds[i].sell_out ;
        ds[i].profit = ds[i].sell_out - ds[i].buy_in ;
        ds[i].id = i ;
    }
    sort(ds + 1, ds + t + 1 , cmp) ;
    for( int i = 1 ; i <= t ; i++)
    {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].type << " " << fixed << setprecision(2) << ds[i].profit << endl ;
    }
}
