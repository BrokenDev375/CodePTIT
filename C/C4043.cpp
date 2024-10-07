#include<stdio.h>
#include<math.h>
#include<stdlib.h>
comp(const void * a , const void * b)
{
	long long *x = (long long *) a;
	long long *y =(long long *)b ;
	if(x > y)
	{
		return 1 ;
	}
	return -1 ;
	
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		int n ;
		scanf("%d", &n) ;
		long long a[n] ;
		int check = 0 ;
		for( int i = 0 ; i < n ; i++)
		{
			scanf("%lld", &a[i]) ;
		}
		qsort(a , n , sizeof(long long) , comp) ;
		for( int i = 0 ; i < n ; i++)
		{
			for( int j = i + 1 ; j < n ; j++)
			{
				long long x = sqrt(a[i]* a[i] + a[j]* a[j]) ;
				if( x * x == a[i]* a[i] + a[j]* a[j])
				{
					for(int k = 0 ; k < n ; k++)
					{
						if(a[k] == x) 
						{
							check = 1 ;
						}
					}
				}
				if(check == 1)
				{
					break ;
				}
			}
			if(check == 1 )
			{
				break ;
			}
		}
		if(check == 1)
		{
			printf("YES\n") ;
		}
		else
		{
			printf("NO\n") ;
		}
	}
}