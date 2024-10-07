#include<stdio.h>
#include<ctype.h>
#include<string.h>
int cd()
{
	char s[20] ;
	scanf("%s", &s) ;
	long long res = 0;
	for( int i = 0 ; i < strlen(s) ; i++)
	{
		int x = s[i] - '0' ;
		if( x == 0 || x == 9 || x ==8)
		{
			x = 0 ;
			res = res * 10 + x ;
		}
		else if( x == 1)
		{
			x  == 1 ;
			res = res * 10 +x ;
		}
		else
		{
			printf("INVALID\n");
			return 0 ;
		}
	}
	if( res == 0 )
	{
		printf("INVALID\n");
		return 0 ;
	}
	else
	{
		printf("%lld\n", res); 
	}
	return 0 ;
	
}

int main()
{
	int t ;
	scanf("%d", &t);
	while(t--)
	{
	cd() ;
	}
}