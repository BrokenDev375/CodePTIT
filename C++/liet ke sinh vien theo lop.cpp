#include<bits/stdc++.h>
using namespace std ;
class student
{
public:
    string classid , id , name , email ;
    friend istream &operator >> (istream &in , student &a)
    {
        scanf("\n") ;
        getline(cin , a.id) ;
        getline(cin , a.name) ;
        getline(cin , a.classid) ;
        getline(cin ,a.email) ;
        return in ;
    }
    friend ostream &operator << (ostream &out , student &a)
    {
        cout << a.id << " " << a.name << " " << a.classid << " " << a.email << endl ;
        return out ;
    }
};
int main()
{
    int n ;
    cin >> n ;
    student ds[n] ;
    for( int i = 0 ; i < n ; i++)
    {
        cin >> ds[i] ;
    }
    int q ;
    cin >> q ;
    while(q--)
    {
        string s ;
        cin >> s ;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for( int i = 0 ; i < n ; i++)
        {
            if(ds[i].classid == s)
            {
                cout << ds[i] ;
            }
        }
    }
}
