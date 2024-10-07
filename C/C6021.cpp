#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		char s[1000] ;
		scanf("%s", s) ;
		int check = 1 ,checkl = 0 , checkc = 0 ;
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			if(s[i] > '9' || s[i] < '0')
			{
				check = 0 ;
			}
		}
		if(s[0] == '0')
		{
			check = 0 ;
		}
		if(check == 0)
		{
			printf("INVALID\n") ;
			continue ;
		}
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			int a = s[i] - '0' ;
			if(a % 2 ==0)
			{
				checkc++ ;
			}
			else
			{
				checkl ++ ;
			}
		}
		if((strlen(s) % 2 == 0 && checkc > checkl ) || (strlen(s) % 2 == 1 && checkl >checkc))
		{
			printf("YES\n") ;
		}
		else
		{
			printf("NO\n") ;
		}
	}
}