#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		char s[500] ;
		scanf("%s", s) ;
		int check = 1 , sum = 0 ;
		if(s[strlen(s) - 1] != '8' && s[0] != '8')
		{
			check = 0 ;
		}
		for( int i = 0 ; i < strlen(s) ; i++)
		{
			sum += s[i] - '0' ;
		}
		if( sum % 10 != 0)
		{
			check = 0 ;
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
