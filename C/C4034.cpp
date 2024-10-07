#include<stdio.h>
int check(int a[], int i, int n)
{	
	if( i == n-1)
	{
		return 1 ;
	}
	for( int j = i + 1 ; j < n ; j++)
	{
		if(a[j] >= a[i])
		{
			return 0 ;
		}
	} 
	return 1;
}
int main()
{
	int t ;
	scanf("%d", &t);
	while(t--)
	{
		int n ;
		scanf("%d", &n);
		int a[n];
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d ", &a[i]);
		}
		for( int i = 0 ; i < n ; i++)
		{
			if(check(a , i , n ))
			{
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
}