#include<stdio.h>
int main()
{
	int t ;
	scanf("%d", &t);
	while(t--)
	{
		int s = 0 ;
		int a ;
		scanf("%d", &a) ;
		if( a / 1000 > 0)
		{
			s += a/1000 ;
			a %= 1000 ; 
		}
		if( a / 500 > 0)
		{
			s += a / 500 ;
			a %= 500 ;
		}
		if( a / 200 > 0)
		{
			s += a /200 ;
			a %= 200 ;
		}
		if( a / 100 > 0)
		{
			s += a/100 ;
			a %= 100 ;
		}
		if( a / 50 > 0)
		{
			 s += a/50 ;
			 a %= 50 ;
		}
		if( a / 20 > 0)
		{
			s += a/ 20 ;
			a %= 20 ; 
		}
		if( a / 10 > 0)
		{
			s += a/10 ;
			a %= 10 ;
		}
		if( a / 5 > 0)
		{
			s += a/5 ;
			a %= 5 ; 
		}
		if( a / 2 > 0)
		{
			 s += a/2 ;
			 a %= 2 ; 
		}
		s += a ;
		printf("%d\n" , s ) ;
	}
}