#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ; 
	while(t--)
	{
		char s[1000] ;
		gets(s) ; int num = 0 ;
		int l = 0 , c = 0 , dem = 0 ;
		for( int i = 0 ;i < strlen(s) ; i++)
		{		
			if( s[i + 1] == ' ' || i == strlen(s) - 1)
			{
				num = s[i] - '0' ;
				if( num % 2 == 0)
				{
					c++ ;
				}
				else
				{
					l++ ;
				}
				dem++ ;
			}
 		}
 		if(( l > c && dem % 2 == 1) || (l < c && dem %2 == 0))
		{
			printf("YES\n") ;
		}
		else
		{
			printf("NO\n") ;
		}
	}
}