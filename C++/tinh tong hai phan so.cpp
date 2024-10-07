#include<bits/stdc++.h>
using namespace std ;
long long gcd(long long a , long long b)
{
    while(b != 0)
    {
        long long x = b;
        b = a % b ;
        a = x ;
    }
    return a ;
}
long long lcm( long  long a , long long b)
{
    return a / (gcd(a , b)) * b ;
}
struct PhanSo
{
    long long nume , deno ;
};
void nhap (struct PhanSo & a)
{
    cin >> a.nume >> a.deno ;
}
struct PhanSo tong(struct PhanSo p , struct PhanSo q)
{
    struct PhanSo t ;
    t.deno = p.deno * q.deno ;
    t.nume = p.nume * q.deno + q.nume * p.deno ;
    long long tmp = gcd(t.deno , t.nume) ;
    t.deno /= tmp ;
    t.nume /= tmp ;
    return t ;
}
void in( struct PhanSo t)
{
    cout << t.nume << "/" << t.deno ;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
