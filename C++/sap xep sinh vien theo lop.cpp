#include<bits/stdc++.h>
using namespace std ;
class student
{
public:
    string id , name , classcode , email ;
    friend istream &operator >> (istream &in ,student &a)
    {
        cin.ignore() ;
        getline(cin , a.id) ;
        getline(cin , a.name) ;
        getline(cin , a.classcode) ;
        cin >> a.email ;
        return in ;
    }
    friend ostream &operator << (ostream &out , student &a)
    {
        cout << a.id << " " << a.name << " " << a.classcode << " " << a.email << endl ;
        return out ;
    }
};
bool cmp(student a , student b)
{
    if(a.classcode == b.classcode)
    {
        return a.id < b.id ;
    }
    return a.classcode < b.classcode ;
}
int main()
{
    int n ;
    cin >> n ;
    student ds[n] ;
    for( int i = 0 ; i < n ; i++)
    {
        cin >> ds[i] ;
    }
    sort(ds , ds + n , cmp) ;
    for( int i = 0 ; i < n ; i++)
    {
        cout << ds[i] ;
    }
}
