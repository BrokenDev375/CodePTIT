#include<bits/stdc++.h>
using namespace std ;
int cnt1 = 1 , cnt2 = 1 ;
class Customer
{
public:
    string CusID , CusName , gender , dofb , address ;
    friend istream &operator <<(istream &in , Customer &a)
    {
        getline(cin ,)
    }
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
