#include<bits/stdc++.h>
using namespace std ;
struct ThiSinh
{
    double s1 , s2 , s3 , sum ;
    string dofb , name ;
};
void nhap(struct ThiSinh &A)
{
    getline( cin , A.name) ;
    getline(cin , A.dofb) ;
    cin >> A.s1 >> A.s2 >> A.s3 ;
    A.sum = A.s1 +A.s2 + A.s3 ;
}
void in( struct ThiSinh A)
{
    cout << A.name << " " << A.dofb << " " << fixed << setprecision(1) <<A.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
