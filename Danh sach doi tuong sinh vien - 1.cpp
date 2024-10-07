#include<bits/stdc++.h>
using namespace std ;
int cnt = 1 ;
class SinhVien
{
public:
    string name , classcode ,dofb , id ;
    double gpa ;
    friend istream &operator >> (istream &in , SinhVien &a)
    {
        cin.ignore() ;
        getline(cin , a.name) ;
        getline(cin , a.classcode) ;
        getline(cin , a.dofb) ;
        if(a.dofb.size() == 9)
        {
            if(a.dofb[1] == '/')
            {
                a.dofb = "0" + a.dofb ;
            }
            else
            {
                a.dofb = a.dofb.substr(0 , 3) + "0" + a.dofb.substr(3) ;
            }
        }
        else if(a.dofb.size() == 8)
        {
            a.dofb = "0" + a.dofb.substr(0 , 2 ) + "0" + a.dofb.substr(2) ;
        }
        a.id = to_string(cnt) ;
        while(a.id.size() <3)
        {
            a.id = "0" +a.id ;
        }
        a.id = "B20DCCN" +a.id ;
        cnt++ ;
        cin >> a.gpa ;
        return in ;
    }
    friend ostream &operator << (ostream &out, SinhVien &a)
    {
        cout <<a.id << " " << a.name << " " << a.classcode << " " << a.dofb << " " << fixed << setprecision(2) << a.gpa << endl ;
        return out ;
        }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
