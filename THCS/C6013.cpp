#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int t ;
	scanf("%d",&t) ;
	while(t--)
	{
		char s[1000] ;
		scanf("%s", s) ; 
		int check = 1 ; int a[10] = {0} ;
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			if(s[i] < '0' || s[i] > '9')
			{
				check = 2  ;
			}
		}
		if(s[0] == '0')
		{
			check = 2 ;
		}
		if(check == 2)
		{
			printf("INVALID\n") ;
			continue ;
		}
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			a[s[i] - '0']++ ;
		}
		for(int i = 0; i < 10 ; i++)
		{
			if(a[i] == 0)
			{
				check = 0 ;
			}
		}
		if(check == 1)
		{
			printf("YES\n") ;
		}
		else
		{
			printf("NO\n") ;
		}
	}
}