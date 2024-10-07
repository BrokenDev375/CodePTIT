#include<bits/stdc++.h>
using namespace std ;

class SinhVien
{
    public:
        string name , class_code , dofb ;
        float gpa ;
    friend istream &operator >> ( istream &in , SinhVien &a)
    {
        getline(cin , a.name) ;
        getline(cin , a.class_code) ;
        getline(cin , a.dofb) ;
        cin >> a.gpa ;
        return in ;
    }
    friend ostream &operator << ( ostream &out , SinhVien a)
    {
        if(a.dofb.size() == 9)
        {
            if(a.dofb[1] == '/')
            {
                a.dofb = '0' + a.dofb ;
            }
            else if(a.dofb[4] == '/')
            {
                a.dofb = a.dofb.substr(0 , 3) + '0' + a.dofb.substr(3) ;
            }
        }
        else if(a.dofb.size() == 8)
        {
            a.dofb = '0' + a.dofb.substr(0 , 2) + '0' + a.dofb.substr(2) ;
        }
        for( int i = 0 ; i < a.name.size() ; i++)
        {
            if(i == 0 || a.name[i - 1] == ' ')
            {
                a.name[i] = toupper(a.name[i]) ;
            }
            else
            {
                a.name[i] = tolower(a.name[i]) ;
            }
        }
        cout << "B20DCCN001 " << a.name << " " << a.class_code << " " << a.dofb << " " << fixed << setprecision(2) << a.gpa ;
        return out ;
    }

};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
