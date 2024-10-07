#include<stdio.h>
int main()
{
	int n ;
	scanf("%d", &n);
	int a[n];
	for( int i = 0 ; i < n ; i++)
	{
		scanf("%d ",&a[i]);
	}
	int b ;
	scanf("%d", &b);
	for( int i = b ; i < n ; i++)
	{
		printf("%d ", a[i]);
	}
	for( int i = 0 ; i < b ; i++)
	{
		printf("%d ",a[i]);
	}
}