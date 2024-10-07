#include<bits/stdc++.h>
using namespace std ;
class NhanVien
{
    public:
        string name , gender , address ,tax_code , dofb , dofc ;
        friend istream &operator >> (istream &in , NhanVien &a)
        {
            getline(cin , a.name) ;
            getline(cin ,a.gender) ;
            getline(cin , a.dofb) ;
            getline(cin , a.address) ;
            getline(cin , a.tax_code) ;
            getline(cin ,a.dofc) ;
            return in ;
        }
        friend ostream &operator << (ostream &out , NhanVien a)
        {
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
            cout << "00001 " << a.name << " " << a.dofb << " " << a.address << " " << a.tax_code << " " << a.dofc ;
            return out ;
        }
} ;
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
