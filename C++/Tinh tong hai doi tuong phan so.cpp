#include<bits/stdc++.h>
using namespace std ;
class PhanSo
{
public:
    long long nume , deno ;
    PhanSo()
    {
        nume = 1 ;
        deno = 1 ;
    }
    PhanSo(long long a , long long b)
    {
        nume = a ;
        deno = b ;
    }
    void rutgon()
    {
        long long x =__gcd(nume , deno) ;
        nume /= x ;
        deno /= x ;
    }
    friend istream &operator >>( istream &in , PhanSo &a)
    {
        cin >> a.nume >> a.deno ;
        return in ;
    }
    friend ostream &operator << (ostream &out , PhanSo a)
    {
        cout << a.nume << "/" << a.deno ;
        return out ;
    }
    PhanSo operator +(PhanSo b)
    {
        PhanSo res ;
        res.nume = this -> nume * b.deno + b.nume * this -> deno ;
        res.deno = this -> deno * b.deno ;
        res.rutgon() ;
        return res ;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
