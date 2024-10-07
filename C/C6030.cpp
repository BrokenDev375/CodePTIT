#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct paragraph
{
	char word[100] ;
	int quantity = 0;
	int length = 0 ;
} ;
typedef paragraph paragraph ;
paragraph f[1005] ;
int count ( int cnt , char s[])
{
	for( int i = 0 ; i < cnt ; i++)
	{
		if( !strcmp(f[i].word , s) )
		{
			return i ;
		}
	}
	return 1 ;
}
int main()
{
	int cnt = 0 ;
	char s[100] = {} ;
	int max = - 1 ;
	int dem = 0 ;
	while((scanf("%s", &s)) != -1)
	{
		int t = count( cnt , s) ;
		if( t == 1)
		{
			strcpy(f[cnt].word , s) ;
			f[cnt].quantity++ ;
			f[cnt].length = strlen(s) ;
			if(f[cnt].length > max)
			{
				max = f[cnt].length ;
			}
			cnt++ ;
		}
		else
		{
			f[t].quantity++ ;
		}
		dem++ ;
	}
	for( int i = 0 ; i < cnt ; i++)
	{
		if( f[i].length == max)
		{
		printf("%s %d %d\n", f[i].word , f[i].length , f[i].quantity) ;
		}
	}
}