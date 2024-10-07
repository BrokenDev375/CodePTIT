#include<stdio.h>
int main()
{
	int a ;
	scanf("%d", &a) ;
	for( int i = 1 ; i <= a ; i++)
	{
		int b = -1 ;
		for( int j = 1 ; j <= i ; j++ )
		{
			b += 2 ;
			printf("%d", b) ;
		}
		for ( int j = 1 ; j <= i-1 ; j++)
		{
			b -= 2 ;
			printf("%d", b) ;
		}
		printf("\n") ;
	}
}