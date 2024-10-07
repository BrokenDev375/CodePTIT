#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t ;
	scanf("%d", &t) ;
	getchar() ;
	while(t--)
	{
			char s1[10001] ;
	gets(s1) ;
	char s2[10001] ;
	gets(s2) ;
	int i = strlen(s1) - 1 ;
	int j = strlen(s2) - 1 ;
	char res[10001] ;
	if(j > i)
	{
		int n = j ;
		int nho = 0 ;
		while(i >= 0)
		{
			int tmp = (s1[i--] - '0') + (s2[j--] - '0') + nho ;
			res[n--] = (tmp % 10) + '0';
			nho = tmp / 10 ;
		}
		while(j >= 0)
		{
			int tmp = (s2[j--] - '0') + nho ; 
			res[n--] = tmp % 10 + '0' ;
			nho = tmp / 10 ;
		}
		if(nho == 1)
		{
			char s[10001] ;
			s[0] = '1' ;
			strcat(s , res) ;
			printf("%s",s ) ;
		}
		else
		{
			char s[10001] ;
			strcpy(s , res) ;
			printf("%s",s ) ;
		}
	}
	else
	{
		int n = i ;
		int nho = 0 ;
		while(j >= 0)
		{
			int tmp = (s1[i--] - '0') + (s2[j--] - '0') + nho ;
			res[n--] = (tmp % 10) + '0';
			nho = tmp / 10 ;
		}
		while(i >= 0)
		{
			int tmp = (s1[i--] - '0') + nho ; 
			res[n--] = tmp % 10 + '0' ;
			nho = tmp / 10 ;
		}
		if(nho == 1)
		{
			char s[10001] = "1";
			strcat(s, res) ;
			printf("%s",s ) ;
		}
		else
		{
			char s[10001] ;
			strcpy(s , res) ;
			printf("%s",s ) ;
		}
	}
		printf("\n") ;
	}
}