#include<bits/stdc++.h>
using namespace std ;
class intern
{
public:
    string id , name ;
    int quantity ;
    friend istream &operator >> (istream &in , intern &a)
    {
        cin >> a.id ;
        cin.ignore() ;
        getline(cin , a.name) ;
        cin >> a.quantity    ;
        return in ;
    }
    friend ostream &operator << (ostream &out ,intern &a)
    {
        cout << a.id << " " << a.name << " " << a.quantity << endl ;
        return out ;
    }
};
bool cmp (intern a , intern b)
{
    if(a.quantity == b.quantity)
    {
        return a.id < b.id ;
    }
    return a.quantity > b.quantity ;
}
int main()
{
    int n ;
    cin >> n ;
    intern ds[n] ;
    for( int i = 0; i < n ; i++)
    {
        cin >> ds[i] ;
    }
    sort(ds , ds + n , cmp) ;
    for( int i = 0 ; i < n ; i++)
    {
        cout << ds[i] ;
    }
}
