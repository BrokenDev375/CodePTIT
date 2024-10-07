#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int check1( char s[] )
{
	int max = - 1e9 ;
	for( int i = 6 ; i < 12 ; i++)
	{
		if(i == 9)
		{
			continue ;
		}
		int tmp = s[i] - '0' ;
		if(tmp <= max)
		{
			return 0 ;
		}
		else
		{
			max = tmp ;
		}
	}
	return 1 ;
}
int check2( char s[] )
{
	int tmp ;
	for( int i = 6 ; i < 12 ; i++)
	{
		if(i == 9)
		{
			continue ;
		}
		if(i == 6)
		{
			tmp = s[i] - '0';
		}
		else
		{
			if( s[i] - ' 0' != tmp)
			{
				return 0 ;
			}
		}
	}
	return 1 ;
}
int check3( char s[] )
{
	if(s[6] == s[7] && s[7] == s[8] && s[10] == s[11])
	{
		return 1 ;
	}
	return 0 ;
}
int check4( char s[] )
{
	for( int i = 6 ; i < 12 ; i++)
	{
		if(i == 9)
		{
			continue ;
		}
	if(s[i] != '8' && s[i] != '6')
	{
		return 0 ;
	}
	}
	return 1 ;
}
int main()
{
	int t ;
	scanf("%d" , &t) ;
	getchar() ;
	for( int i = 0 ; i < t ; i++)
	{
		char s[100] ;
		gets(s) ;
		if(check1(s) || check2(s)|| check3(s) || check4(s))
		{
			printf("YES\n") ;
		}
		else
		{
			printf("NO\n") ;
		}
	}
}