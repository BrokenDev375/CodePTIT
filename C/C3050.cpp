#include<stdio.h>

int main()
{
		int k[100005] = {0};
	int i ;
	int n , a , b ;
	scanf("%d", &n);
	for ( i = 1 ; i < n ; ++i)
	{
		scanf ("%d %d", &a , &b);
		k[a]++;
		k[b]++;
	}
	for( i = 1; i <= n ; ++i)
	{
		if( k[i] != 1 && k[i] != n-1 )
		{
			printf("No");
			return 0 ;
		}
	}
	printf("Yes");
	return 0 ;
}