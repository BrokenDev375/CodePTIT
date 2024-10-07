#include<stdio.h>
int main()
{
	int a  ;
	int c = 0 ;
	int b = 0 ;
	scanf("%d", &a) ;
	for( int i = 1 ; i <= a ; i++)
	{
		if( i % 2 == 1)
		{	
			b = c ;	
			for( int j = 1 ; j <= i ; j++)
			{
				b += 1 ;
				printf("%d ", b) ;
			}
		
		}
		else
		{
			for( int j = 1 ; j <= i ; j++)
			{
				if( j == 1 )
				{
					b += i ;
					c = b ;
					printf("%d ", b) ;
				}
				else
				{
					b-- ;
					printf("%d ", b) ;
				}
			}
		}
		printf("\n") ;
	}
}