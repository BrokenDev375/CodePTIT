#include<stdio.h>
int main()
{
	int a  ;
	char c = 96 ;
	char b = 0 ;
	scanf("%d", &a) ;
	for( int i = 1 ; i <= a ; i++)
	{
		if( i % 2 == 1)
		{	
			b = c ;	
			for( int j = 1 ; j <= i ; j++)
			{
				b += 1 ;
				printf("%c ", b) ;
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
					printf("%c ", b) ;
				}
				else
				{
					b-- ;
					printf("%c ", b) ;
				}
			}
		}
		printf("\n") ;
	}
}