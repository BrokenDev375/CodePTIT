#include<bits/stdc++.h>
using namespace std ;
struct SinhVien
{
    string name , classcode ,dofb , date , tmp1 , tmp2 ;
    double gpa ;

};
void nhap(struct SinhVien &a)
{
    getline(cin , a.name) ;
    getline(cin , a.classcode) ;
    getline(cin , a.dofb) ;
    for( int i = 0 ; i < a.dofb.size() ; i++)
    {
        if(a.dofb[i] == '/')
        {
            a.dofb[i] = ' ' ;
        }
    }
    stringstream ss(a.dofb) ;
    string word ;
    int cnt = 0 ;
    while(ss >> word)
    {
        int n = stoi(word) ;  // so sanh thang va ngay neu < 10 thi them 0 o truoc
        if(n < 10)
        {
            word = "0" + word + "/" ;
        }
        else if(cnt == 2)
        {
            0 ;// nam thi giu nguyen
        }
        else
        {
            word += "/" ;
        }
        cnt++ ;
        a.date += word ;
    }
    cin >> a.gpa ;
}
void in(struct SinhVien a)
{
    cout << "B20DCCN001 " << a.name << " " << a.classcode << " " << a.date << " " << fixed << setprecision(2) << a.gpa ;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
