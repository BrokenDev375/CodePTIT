#include<stdio.h>
int main()
{
	int n ;
	scanf("%d ", &n);
	int a[n][n] ; 
	for(int  i = 0 ; i < n ; i++)
	{	
		int c = 0 ;
		for( int j = 0 ; j < n ; j++)
		{
			if(i >= j)
			{
				a[i][j] = 0 ;
			}
			else
			{	
			c++;
			a[i][j] = c ;
			}
		}
	}
	for( int i = 0 ; i < n ; i ++)
	{
		for( int j = 0 ; j < n ; j++)
		{
			printf( "%d ", a[i][j]);
		}
		printf("\n");
	}
}