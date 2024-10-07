#include<stdio.h>
#include<math.h>

int stnghich(long long n){
	int m=n ; 
	int u = 0 ;
	while(n>0){
		u=u*10+n%10;
		n/=10;
	}
	if(u==m){
		return 1 ;
	}
		return 0 ;
	}
int sd( long long  n)
{	
	int dem = 0 ;
	long long  m = n;
	int a = m%10 ;
	long long  b = n/10 ;
	while(b > 0)
	{
	b/=10;
	m/=10;	
	}
	if(m != 2*a && a != 2*m )
	{
		return 0 ;
	}
	n = (n - a)/10 ;
	n = n=b*pow(10,dem);
	if( stnghich(n) == 0)
	{
		return 0 ;
	}
	return 1;
}
int main()
{
	int t ;
	scanf("%d", &t);
	while( t-- )
	{
		long long  a ;
		scanf("%lld", &a);
		if(sd(a) == 1)
		{
			printf("YES\n") ; 
		}
		else
		{
			printf("NO\n");
		}
	}
}