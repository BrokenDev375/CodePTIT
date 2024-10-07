#include<stdio.h>
int main()
{
	int a ;
	scanf("%d", &a) ;
	for( int i = 1 ; i <= a; i++)
	{
		int cnt = 0 ;
		for( int j = 1 ; j <=  a ; j++)
		{
			printf( "%d", a - cnt) ;
				if( cnt < i - 1)
				{
					cnt++ ; 
				}
		}
		int dem = i - a ;
		for( int j = 1 ; j <= a - 1 ; j++)
		{
			if( dem >=  0)
			{
				cnt-- ;
			}
			printf("%d", a - cnt)  ;
			dem ++ ;
		}
		printf("\n") ;
	}
	for( int i = 1 ; i < a ; i++)
	{
		int dem = a - i - 1 ;
		int cnt = 0 ;
		for( int j = 1 ; j <= a ; j++)
		{
			printf("%d", a -cnt );
			if(dem > 0)
			{
				cnt++ ;
			}
			dem-- ;
		}
		dem = 1 - i ;
		cnt = a - i - 1  ; 
		for ( int j = 1 ; j < a ; j++)
		{
			printf("%d", a - cnt) ;
			if( dem >= 0)
			{
				cnt-- ;
			}
			dem++ ;
		}
		printf("\n") ;
	}
}