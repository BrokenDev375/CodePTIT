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
bool cmp(lecturer a , lecturer b)
{
    if(a.solve.back() == b.solve.back())
    {
        return a.id < b.id ;
    }
    return a.solve.back() < b.solve.back() ;
}
int main()
{
    int n ;
    cin >> n ;
    lecturer ds[n] ;
    for( int i= 0 ; i < n ; i++)
    {
        cin >> ds[i] ;
    }
    sort(ds , ds + n , cmp) ;
    for( int i = 0 ; i < n ; i++)
    {
        cout << ds[i] ;
    }
}
