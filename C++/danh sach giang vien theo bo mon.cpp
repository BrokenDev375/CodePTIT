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
        string tmp = a.major ;
        stringstream ss(tmp) ;
        string word ;
        for(int i = 0 ; i < a.major.size() ; i++)
        {
            a.major[i] = toupper(a.major[i]) ;
        }
        while(ss >> word)
        {
            a.shortmajor.push_back(word) ;
        }
        for(int i = 0 ; i < a.shortmajor.size() ; i++)
        {
            a.shortmajor[i][0] = toupper(a.shortmajor[i][0]) ;
        }
        stringstream ss2 (a.name) ;
        while(ss2 >> word)
        {
            a.solve.push_back(word) ;
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
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string s ;
        getline(cin, s) ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            s[i] = toupper(s[i]) ;
        }
        string tmp = s ;
        stringstream ss(tmp) ;
        string word ;
        cout << "DANH SACH GIANG VIEN BO MON " ;
        while(ss >> word)
        {
            word[0] = toupper(word[0]) ;
            cout << word[0] ;
        }
        cout << ":" << endl ;
        for( int i = 0 ; i < n ; i++)
        {
            if(s == ds[i].major)
            {
                cout << ds[i] ;
            }

        }
    }

}
