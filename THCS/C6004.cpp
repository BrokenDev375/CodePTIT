#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100000] ; int dem1 = 0 , dem2 = 0 , dem3 = 0 ;
	gets(s) ;
	for( int i = 0 ; i < strlen(s) ; i++)
	{
		if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) 
		{
			dem1++ ;
		}
		else if(s[i] >= '0' && s[i] <= '9')
		{
			dem2++ ;
		}
		else
		{
			dem3 ++ ;
		}
	}
	printf("%d %d %d", dem1 ,dem2 ,dem3) ;
}