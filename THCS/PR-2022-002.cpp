#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
long long snt( long long  n )
{

	for	(long long i = 2; i <= sqrt(n) ;++i)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1 ;
}
int a[10000000] ;
char b[1000][1000] ;
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	for( int k = 0 ; k < t ; k++)
	{
		char s[10001] ;
		gets(s) ;
		strcpy(b[k], s) ;
	}
	for( int k = 0; k < t ; k++)
	{
		int check = 1 ;
		for( int i = 0 ; i < strlen(b[k]) ;i++)
		{
			long long a = 0 ;
			for( int j = i ; j < strlen(b[k]) ; j++)
			{
				a = a * 10 + (b[k][j] - '0') ;
			}
			for( int j = 0 ; j < i ; j++)
			{
				a = a * 10 +(b[k][j] - '0') ;
			}
			if(snt(a) == 0)
			{
				check = 0 ;
			}
		}
		a[k] = check ;
	}
	for( int k = 0; k < t ; k++)
	{
		printf("%d ", a[k]) ;
	}
}