#include<bits/stdc++.h>
using namespace std ;
struct NhanVien
{
    string id, name , sex ,dofb ,dofc ,tax_code , address ;
};
void nhap(struct NhanVien &a)
{
    scanf("\n") ;
    getline( cin , a.name) ;
    getline(cin , a.sex) ;
    getline(cin , a.dofb) ;
    getline(cin , a.address) ;
    getline(cin , a.tax_code) ;
    getline(cin , a.dofc) ;
    if(a.dofb.size() == 8)
    {
        a.dofb = '0' +a.dofb.substr(0 , 2) + '0' +  a.dofb.substr(2) ;
    }
    else if(a.dofb.size() == 9)
    {
        if(a.dofb[1] =='/' )
        {
            a.dofb = '0' + a.dofb ;
        }
        else
        {
            a.dofb = a.dofb.substr(0 , 3) + '0' + a.dofb.substr( 3 ) ;
        }
    }
    if(a.dofc.size() == 8)
    {
        a.dofc = '0' +a.dofc.substr(0 , 2) + '0' + a.dofc.substr(2) ;
    }
    else if(a.dofc.size() == 9)
    {
        if(a.dofc[1] =='/' )
        {
            a.dofc = '0' + a.dofc ;
        }
        else
        {
            a.dofc = a.dofc.substr(0 , 3) + '0' + a.dofc.substr( 3 ) ;
        }
    }
}
void inds( struct NhanVien ds[] , int n )
{
    for( int i = 0 ; i < n ; i++)
    {
        ds[i].id =to_string(i + 1 ) ;
        while(ds[i].id.size() < 5)
        {
            ds[i].id = '0' + ds[i].id ;
        }
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].dofb << " " << ds[i].address << " " << ds[i].tax_code << " " << ds[i].dofc << endl ;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
