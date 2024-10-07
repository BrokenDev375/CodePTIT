#include<bits/stdc++.h>
using namespace std ;
struct SinhVien
{
    string name , classcode ,dofb , id ;
    vector<string> res ;
    double gpa ;

};
void nhap(struct SinhVien ds[] , int n)
{

    for( int i = 0 ; i < n ; i++)
    {
        cin.ignore() ;
        getline(cin , ds[i].name) ;
        getline(cin , ds[i].classcode) ;
        getline(cin , ds[i].dofb) ;
        if(ds[i].dofb.size() == 9)
        {
            if(ds[i].dofb[1] == '/')
            {
                ds[i].dofb = '0' + ds[i].dofb ;
            }
            else if(ds[i].dofb[4] == '/')
            {
                ds[i].dofb = ds[i].dofb.substr(0 , 3) + '0' + ds[i].dofb.substr(3) ;
            }
        }
        else if( ds[i].dofb.size() == 8)
        {
            ds[i].dofb = '0' + ds[i].dofb.substr(0 , 2) + '0' + ds[i].dofb.substr(2) ;
        }
        cin >> ds[i].gpa ;
        int tmp = i + 1 ;
        if(tmp <10)
        {
            ds[i].id = "00" + to_string(tmp) ;
        }
        else
        {
            ds[i].id = "0" + to_string(tmp) ;
        }
        for( int j = 0 ; j < ds[i].name.size() ; j++)
        {
            ds[i].name[j] = tolower(ds[i].name[j]) ;
        }
        stringstream ss(ds[i].name) ;
        string word ;
        while( ss >> word)
        {
            ds[i].res.push_back(word) ;
        }
        for( int j = 0 ; j < ds[i].res.size() ; j++)
        {
           ds[i].res[j][0] = toupper(ds[i].res[j][0]) ;
        }
    }
}
void in(struct SinhVien ds[], int n)
{
    for( int i = 0 ; i < n ; i++)
    {
        cout << "B20DCCN" << ds[i].id << " " ;
        for( int j = 0 ; j < ds[i].res.size() ; j++)
        {
            cout << ds[i].res[j] << " " ;
        }
        cout << " " << ds[i].classcode << " " << ds[i].dofb << " " << fixed << setprecision(2) << ds[i].gpa << endl ;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
