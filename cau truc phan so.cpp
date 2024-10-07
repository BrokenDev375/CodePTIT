#include<bits/stdc++.h>
using namespace std ;
long long gcd(long long a , long long b)
{
    while( b != 0)
    {
        long long x = b ;
        b = a % b ;
        a = x ;
    }
    return a ;
}
long long lcm(long long a , long long b)
{
    return a / gcd(a , b) * b ;
}
struct PhanSo
{
    long long deno , nume ;

};
void nhap (struct PhanSo &p)
{
    cin >> p.nume >> p.deno ;
}
void rutgon(struct PhanSo &p)
{
    long long tmp = gcd(p.nume , p.deno) ;
    p.nume = p.nume / tmp ;
    p.deno = p.deno / tmp ;
}
void in(struct PhanSo p)
{
    cout << p.nume << "/" << p.deno ;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
