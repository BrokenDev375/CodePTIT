#include<bits/stdc++.h>
using namespace std ;
long long gcd( long long a , long long b)
{
    while( b != 0)
    {
        long long  x = b ;
        b = a % b ;
        a = x ;
    }
    return a ;
}
class PhanSo
{
    public:
    long long nume , deno ;
    PhanSo(long long a , long long b)
    {
        nume = a ;
        deno = b ;
    } ;
    void rutgon()
    {
        long long tmp = gcd(nume , deno) ;
        nume /= tmp ;
        deno /= tmp ;
    }
    friend istream &operator >> ( istream &in , PhanSo &a)
    {
        cin >> a.nume >> a.deno ;
        return in ;
    }
    friend ostream &operator << (ostream &out , PhanSo a)
    {
        cout << a.nume << "/" << a.deno ;
        return out ;
    }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
