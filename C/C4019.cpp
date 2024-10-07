#include<stdio.h>
#include<math.h>
int b[30001]  ;
int check(int a[], int n)
{
	for( int i = 0 ; i < n ; i++)
	{
		if( a[n] == a[i] )
		{
			return 0 ;
		}
	}
	return 1 ;
}
void solve()
{
		int n ;
		scanf("%d", &n);
		int a[n] ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%d ", &a[i]) ;
		}
		for( int i = 0 ; i < n ; i++)
		{
			b[a[i]]++ ;
		}
		int max = -1e6 ;
		for( int i = 0 ; i < n ; i++)
		{
			if( b[a[i]] >= max)
			{
				max = b[a[i]] ;
			}
			
		}
		for( int i = 0 ; i < n ; i++)
		{
			if(b[a[i]] == max && check(a, i))
			{
				printf("%d ", a[i]) ;
			}
		}
		printf("\n") ;
		for( int i = 0 ; i < n ; i++)
		{
			b[a[i]] = 0 ;
		}
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		solve() ;
	}
	return 0 ;
}