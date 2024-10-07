#include<bits/stdc++.h>
using namespace std ;
struct intern
{
    int id ;
    string msv , name , classcode , email , com ;
};
bool cmp(struct intern a , struct intern b)
{
    return a.msv < b.msv ;
}
int main()
{
    int n ;
    cin >> n ;
    cin.ignore();
    struct intern f[n] ;
    for( int i = 0 ; i < n ; i++)
    {
        getline(cin ,f[i].msv) ;
        getline(cin , f[i].name) ;
        getline(cin , f[i].classcode) ;
        getline(cin , f[i].email) ;
        getline( cin ,f[i].com );
        f[i].id = i + 1 ;
    }
    int q ;
    cin >> q ;
    sort(f ,f + n , cmp) ;
    for( int j = 0 ; j < q ; j++)
    {
        string s ;
        cin >> s ;
        for( int i = 0 ; i < n ; i++)
        {
            if(f[i].com == s)
            {
                cout << f[i].id << "  " << f[i].msv << " " << f[i].name << " " << f[i].classcode << " " <<  f[i].email << " " << f[i].com << endl ;
            }

        }
    }
}
