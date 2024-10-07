#include<bits/stdc++.h>
using namespace std ;
long long lcm(long long a , long long b)
{
    long long tmp =__gcd(a , b) ;
    return a / tmp * b ;
}
struct PhanSo
{
    long long tu , mau ;
};
void process(PhanSo A , PhanSo B)
{
    struct PhanSo C ;
    C.mau = A.mau * B.mau ;
    C.tu = A.tu * B.mau + B.tu * A.mau ;
    long long tmp = __gcd(C.mau , C.tu) ;
    C.mau /=  tmp ;
    C.tu /= tmp ;
    C.mau *= C.mau ;
    C.tu *= C.tu ;
    struct PhanSo D ;
    D.mau = A.mau * B.mau * C.mau ;
    D.tu = A.tu * B.tu * C.tu ;
    tmp = __gcd(D.mau , D.tu) ;
    D.mau /= tmp ;
    D.tu /= tmp ;
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl ;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
