#include<bits/stdc++.h>
using namespace std ;
int cnt = 1 ;
class lecturer
{
public:
    string id , name , major;
    vector<string> shortmajor , solve;
    friend istream &operator >> (istream &in , lecturer &a)
    {
        scanf("\n") ;
        getline(cin , a.name) ;
        getline(cin , a.major) ;
        stringstream ss(a.major) ;
        string word ;
        while(ss >> word)
        {
            a.shortmajor.push_back(word) ;
        }
        stringstream ss2 (a.name) ;
        while(ss2 >> word)
        {
            a.solve.push_back(word) ;
        }
        for(int i = 0 ; i < a.shortmajor.size() ; i++)
        {
            a.shortmajor[i][0] = toupper(a.shortmajor[i][0]) ;
        }
        a.id = to_string(cnt++) ;
        while(a.id.size() < 2)
        {
            a.id = "0" + a.id ;
        }
        a.id = "GV" + a.id ;
        return in ;
    }
    friend ostream &operator << (ostream &out , lecturer &a)
    {
        cout << a.id << " " << a.name << " ";
        for( int i = 0 ; i < a.shortmajor.size() ; i++)
        {
            cout << a.shortmajor[i][0] ;
        }
        cout << endl ;
        return out ;
    }
};
int main()
{
    int n ;
    cin >> n ;
    lecturer ds[n] ;
    for( int i= 0 ; i < n ; i++)
    {
        cin >> ds[i] ;
    }
    int q ;
    cin >> q ;
    while(q--)
    {
        string s ;
        cin >> s ;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl ;
        for( int i = 0 ; i < s.size() ; i++)
        {
            s[i] = tolower(s[i]) ;
        }
        for( int i = 0 ; i < n ; i++)
        {
            string tmp = ds[i].name ;
            for( int i = 0 ; i < tmp.size() ; i++)
            {
                tmp[i] = tolower(tmp[i]) ;
            }
            if(tmp.find(s) != string::npos )
            {
                cout << ds[i] ;
            }
        }
    }

}
