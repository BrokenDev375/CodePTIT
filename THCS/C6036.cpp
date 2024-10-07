#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[1000000] ;
	gets(s) ;
	printf("%d", strlen(s) - 1) ;
}