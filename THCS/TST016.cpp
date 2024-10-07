#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[10001] ;
	gets(s) ;
	int check = 1 ;
	int a[8] = {0} ;
	for(int i = 0 ; i < strlen(s) ; i++)
	{
		if(s[i] == '(')
		{
			a[0]++	;
		}
		else if(s[i] == ')')
		{
			a[1]++	;
		}
		else if(s[i] == '[')
		{
			a[2]++ ;
		}
		else if(s[i] == ']')
		{
			a[3]++ ;
		}
		else if(s[i] == '{')
		{
			a[4]++ ;
		}
		else if(s[i] == '}')
		{
			a[5]++ ;
		}
		else if(s[i] == 39)
		{
			a[6]++ ;
		}
		else if(s[i] == 34)
		{
			a[7]++ ;
		}
	}
	if(a[0] != a[1] || a[2] != a[3] || a[4] != a[5] || a[6] % 2 != 0 || a[7] % 2 != 0)
	{
		check = 0 ;
	}
	if(check == 1)
	{
		printf("1") ;
	}
	else
	{
		printf("0") ;
	}
}