#include<bits/stdc++.h>
using namespace std ;
class SinhVien
{
    public:
        string name , class_code , dofb ;
        double gpa ;
    public:
        void nhap()
        {
            getline(cin ,name) ;
            getline(cin , class_code) ;
            getline(cin , dofb) ;
            cin >> gpa ;
        }
        void xuat()
        {
            if(dofb.size() == 9)
            {
                if(dofb[1] == '/')
                {
                    dofb = '0' + dofb ;
                }
                else if(dofb[4] == '/')
                {
                    dofb = dofb.substr(0 , 3) + '0' + dofb.substr(3) ;
                }
            }
            else if( dofb.size() == 8)
            {
                dofb = '0' + dofb.substr(0 , 2) + '0' + dofb.substr(2) ;
            }
            cout << "B20DCCN001 " << name << " " << class_code << " " << dofb << " " << fixed << setprecision(2) << gpa ;
        }

};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
