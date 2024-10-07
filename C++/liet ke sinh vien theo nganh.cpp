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
string solve(string s)
{
    if(s == "KE TOAN")
    {
        return "KT" ;
    }
    else if(s == "CONG NGHE THONG TIN")
    {
        return "CN" ;
    }
    else if(s == "VIEN THONG")
    {
        return "VT" ;
    }
    else if( s== "AN TOAN THONG TIN")
    {
        return "AT" ;
    }
    return "DT" ;
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
    int q ;
    cin >> q ;
    cin.ignore() ;
    while(q--)
    {
        string s ;
        getline(cin , s) ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            s[i] = toupper(s[i]) ;
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for( int i = 0 ; i < n ; i++)
        {
            if(solve(s) == "CN" || solve(s) == "AT")
            {
                if(ds[i].classid[0] != 'E')
                {
                    if(ds[i].id.substr(5 , 2) == solve(s))
                    {
                        cout << ds[i] ;
                    }
                }
            }
            else
            {
                if(ds[i].id.substr(5 , 2) == solve(s))
                {
                    cout << ds[i] ;
                }
            }
        }
    }
}
