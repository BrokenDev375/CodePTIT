#include<bits/stdc++.h>
using namespace std ;
int cnt = 1 ;
struct NhanVien
{
    string  id , name , gender , dofb , address , tax_code , dofc , date , month , year ;
    vector<string> res ;
};
void nhap(struct NhanVien &a )
{
    cin.ignore() ;
    getline(cin , a.name) ;
    getline(cin , a.gender) ;
    getline(cin , a.dofb) ;
    getline(cin , a.address) ;
    getline(cin , a.tax_code) ;
    cin >> a.dofc ;
    if(a.dofb.size() == 8)
    {
        a.dofb = "0" + a.dofb.substr(0 , 2) + "0" + a.dofb.substr(2) ;
    }
    else if(a.dofb.size() == 9)
    {
        if(a.dofb[1] == '/')
        {
            a.dofb = "0" + a.dofb ;
        }
        else if( a.dofb[2] == '/')
        {
            a.dofb = a.dofb.substr(0 , 3) + "0" + a.dofb.substr(3) ;
        }
    }
    a.id = to_string(cnt++);
    while (a.id.size() < 5) {
        a.id = "0" + a.id;
    }
    a.month = a.dofb.substr(0 , 2) ;
    a.date = a.dofb.substr(3 , 2) ;
    a.year = a.dofb.substr(6 , 4) ;
}
bool cmp(struct NhanVien a , struct NhanVien b )
{
    if(a.year == b.year)
    {
        if(a.month
            == b.month)
        {
            int tmp1 = stoi(a.date) ;
            int tmp2 = stoi(b.date) ;
            return tmp1 < tmp2 ;
        }
        int tmp1 = stoi(a.month) ;
        int tmp2 = stoi(b.month) ;
        return tmp1 < tmp2 ;
    }
    int tmp1 = stoi(a.year) ;
    int tmp2 = stoi(b.year) ;
    return tmp1 < tmp2 ;
}
void sapxep(struct NhanVien ds[] , int n)
{
    sort(ds , ds + n , cmp) ;
}
void inds(struct NhanVien ds[] , int n)
{
    for( int i = 0 ; i < n ; i++)
    {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dofb << " " << ds[i].address << " " << ds[i].tax_code << " " << ds[i].dofc << endl ;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
