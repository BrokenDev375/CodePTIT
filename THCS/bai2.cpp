#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int dau_cuoi(char s[], int n)
{
	int a = s[0] % 2 ;
	int b = s[n - 1] % 2;
	if( a == b)
	{
		return 1 ;
	}
	return 0 ;
}
int canh_nhau( char s[] , int n)
{
	for( int i = 0 ; i < n - 1 ; i++)
	{
		int a = s[i] - '0' ;
		int b = s[i + 1 ] - '0' ;
		if(( a == 2 && b == 8) ||( a == 8 && b == 2) )
		{
			return 0 ;
		}
		if( abs(a - b) == 3) 
		{
			return 0 ;
		}
	}
	return 1 ;
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	while(t--)
	{
		char s[1004] ;
		gets(s) ;
		int n = strlen(s) ;
		if(dau_cuoi(s , n) == 0 || canh_nhau(s , n) == 0)
		{
			printf("NO\n") ;
		}
		else
		{
			printf("YES\n") ;
		}
	}
}