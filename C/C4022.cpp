#include<stdio.h>
int main()
{
	int n ;
	scanf("%d ", &n);
	int a[n];
	for( int i = 0 ; i < n; i++)
	{
		scanf("%d ", &a[i]);
	}
	int max = -1e9 ;
	for(int i = 0 ; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	int premax = -1e9 ;
	for(int i = 0 ; i < n; i++)
	{
		if(a[i] > premax && a[i] != max)
		{
			premax = a[i];
		}
	}
	printf("%d %d", max, premax);
	
}
