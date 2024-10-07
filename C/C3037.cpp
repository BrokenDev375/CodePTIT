#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char c[20] ;
	scanf("%s" , &c ) ;
	int a[10] = {0} ;
	for( int i = 0 ; i < strlen(c) ; i++)
	{
		int b = c[i] - '0' ;
		if ( b == 2 || b == 3 || b == 5 || b ==7 )
		{
			a[b]++ ;
		}
	}
	for ( int i = 0 ; i < strlen(c) ; i++)
	{
		int b = c[i] - '0' ;
		if( a[b] != 0)
		{
			printf("%d %d\n", b , a[b]) ;
			a[b] = 0 ;
		}
	}
}