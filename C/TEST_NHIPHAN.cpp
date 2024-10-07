#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int s[10] ;
	int dem = 9 ;
	int a ;
	scanf("%d", &a) ;
	if(a == 0)
	{
	    printf("0") ;
	}
	while( a > 0)
	{
		s[dem] = a % 2 ;
		a /= 2 ;
		dem -- ;
	}
	for(int i = dem + 1 ; i < 10 ; i++)
	{
		printf("%d",s[i]) ;
	}
}