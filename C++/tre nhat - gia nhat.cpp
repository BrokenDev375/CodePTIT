#include<bits/stdc++.h>
using namespace std ;
struct age
{
    string name , dofb ;
    string date , month , year ;
};
void res( struct age & a)
{
    a.date = a.dofb.substr(0 , 2)  ;
    a.month = a.dofb.substr(3 , 2) ;
    a.year = a.dofb.substr (6 , 4) ;
}
bool cmp(struct age a , struct age b)
{
    if(a.year == b.year)
    {
        if(a.month == b.month)
        {
            int tmp1 = stoi(a.date) ;
            int tmp2 = stoi(b.date) ;
            return tmp1 < tmp2 ;
        }
        int tmp1 = stoi(a.month) ;
        int tmp2 = stoi(b.month) ;
        return tmp1 < tmp2 ;
    }
    int tmp1 = stoi(a.year) ;
    int tmp2 = stoi(b.year) ;
    return tmp1 < tmp2 ;
}
int main()
{
    int n ;
    cin >> n ;
    struct age f[100] ;
    for( int i = 0 ; i < n ; i++)
    {
        cin >> f[i].name >> f[i].dofb ;
        res(f[i]) ;
    }
    sort(f , f + n , cmp) ;
    cout << f[n - 1].name << endl << f[i].name ;
}
