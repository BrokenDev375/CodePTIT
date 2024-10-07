#include<bits/stdc++.h>
using namespace std ;
int cnt = 1 ;
class NhanVien
{
public:
    string id , name ,gender , dofb , address , taxcode ,dofc ;
    int date , month , year ;
    friend istream &operator >> (istream &in , NhanVien &a)
    {
        scanf("\n");
        getline(cin , a.name) ;
        getline(cin , a.gender) ;
        getline(cin , a.dofb) ;
        getline(cin , a.address) ;
        getline(cin , a.taxcode) ;
        getline(cin , a.dofc) ;
        a.id = to_string(cnt++) ;
        while(a.id.size() < 5)
        {
            a.id = "0" + a.id ;
        }
        a.month = stoi(a.dofb.substr(0,2)) ;
        a.date= stoi(a.dofb.substr(3, 2)) ;
        a.year = stoi(a.dofb.substr(6 , 4)) ;
        return in ;
    }
    friend ostream &operator << (ostream &out , NhanVien &a)
    {
        cout << a.id << " " << a.name << " " << a.gender << " " << a.dofb << " " << a.address << " " <<  a.taxcode << " " << a.dofc << endl  ;
        return out ;
    }
};
bool cmp(NhanVien a , NhanVien b)
{
    if(a.year == b.year)
    {
        if(a.month == b.month)
        {
            return a.date < b.date ;
        }
        return a.month < b.month ;
    }
    return a.year < b.year ;
}
void sapxep(NhanVien ds[] , int n)
{
    sort(ds , ds + n , cmp) ;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
