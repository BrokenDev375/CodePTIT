#include<bits/stdc++.h>
using namespace std ;
class student
{
public:
    string id , name , classcode , email ;
    friend istream &operator >> (istream &in ,student &a)
    {
        scanf("\n") ;
        getline(cin , a.id) ;
        getline(cin , a.name) ;
        getline(cin , a.classcode) ;
        getline(cin ,a.email) ;
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
        return a.id < b.id ;
}
int main()
{
    student ds[1005] , x ;
    int i = 0 ;
    while(cin >> x)
    {
        ds[i++] = x ;
    }
    sort(ds , ds + i , cmp) ;
    for( int j = 0 ; j < i ; j++)
    {
        cout << ds[j] ;
    }
}
