#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int check(char a[100] , char b[100])
{
    char s1[30], s2[30];
    strcpy(s1, a);
    strcat(s1, b);
    strcpy(s2, b);
    strcat(s2, a);	
	if( strcmp(s1 , s2) >= 0)
	{
		return 1 ;
	}
	return 0 ;
}
void solve()
{
	int n ;	
	scanf("%d", &n) ;
	char a[100][100] ;
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%s", &a[i]) ;
	}
	for( int i = 0 ; i < n - 1; i++)
	{
		for( int j = i + 1 ; j < n ; j++)
		{
			if(check ( a[i] , a[j]))
			{
				char tmp[100] ; 
				strcpy(tmp , a[i]) ;
				strcpy(a[i] , a[j]) ;
				strcpy(a[j] , tmp) ;
			}
		}
	}
	for( int i = 0 ; i < n ;i++)
	{
		printf("%s",a[i]) ;
	}
	printf("\n") ;	
}
int main()
{
	int t ;
	scanf("%d\n", &t) ;
	while(t--)
	{
		solve() ;
	}
}