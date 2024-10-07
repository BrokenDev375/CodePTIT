#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct tamgiac
{
	double a , b ,c ;
	double p ;
	double S ;
} ;
typedef struct tamgiac tamgiac ;
int main()
{
	int n ;
	scanf("%d", &n) ;
	tamgiac f[n+1] ;
	for( int i = 1 ; i <= n ; i++)
	{
		scanf("%lf %lf %lf", &f[i].a , &f[i].b , &f[i].c) ;
		f[i].p = (f[i].a + f[i].b + f[i].c ) / 2 ;
		f[i].S = sqrt(f[i].p*(f[i].p - f[i].a)*(f[i].p - f[i].b)*(f[i].p - f[i].c)) ;
	}
	for( int i = 1 ; i <=n ; i++)
	{
		for( int j = i+ 1 ; j <= n ; j++)
		{
			if(f[i].S > f[j].S)
			{
				tamgiac tmp = f[i] ;
				f[i] = f[j] ;
				f[j] = tmp ;
			}
		}
	}
	for( int i = 1 ; i <=n ; i++)
	{
		printf("%.0lf %.0lf %.0lf\n", f[i].a ,f[i].b ,f[i].c) ;
	}
}