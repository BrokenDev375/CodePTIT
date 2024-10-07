#include<bits/stdc++.h>
using namespace std ;
struct SinhVien
{
    string code , name , classcode ;
    double s1 , s2 , s3 ;
};
void nhap(struct SinhVien &a)
{
    cin.ignore() ;
    getline(cin , a.code) ;
    getline(cin , a.name) ;
    getline(cin , a.classcode) ;
    cin >> a.s1 >> a.s2 >> a.s3 ;
}
bool cmp(struct SinhVien a , struct SinhVien b)
{
    return a.code < b.code ;
}
void sap_xep(struct SinhVien ds[] , int n)
{
    sort(ds , ds + n , cmp) ;
}
void in_ds(struct SinhVien ds[] , int n)
{
    for( int i = 0 ; i < n ; i++)
    {
        cout << i + 1 << " " << ds[i].code << " " << ds[i].name << " " << ds[i].classcode <<  " ";
        cout << fixed << setprecision(1) << ds[i].s1 << " " << ds[i].s2 << " " << ds[i].s3 << endl ;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
