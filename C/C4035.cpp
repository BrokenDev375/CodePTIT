#include<stdio.h>
#include<math.h>
int max(int a, int b)
{
	if(a > b)
	{
		return a ;
	}
	return b ;
}
int min(int a, int b)
{
	if(a < b)
	{
		return a ;
	}
	return b ;
}
int main()
{
	int n ;
	scanf("%d", &n) ;
	int mina = 1e9 , minb= 1e9 ;
	int a[n] , b[n] ;
	int suma = 0 , sumb = 0 ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d %d", &a[i] , &b[i]) ;
		mina = min(mina , a[i]) ;
		minb = min(minb, b[i]) ;
		suma += a[i] ;
		sumb += b[i] ;
	}
	suma += minb ;
	sumb += mina ;
	printf("%d",max(suma, sumb)) ;
}
