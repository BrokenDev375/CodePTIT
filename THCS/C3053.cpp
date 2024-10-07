#include<stdio.h>
#include <math.h>
int snt( int n )
{
	if( n < 2)
	{
		return 0 ;
	}
	for	(int i = 2; i <= sqrt(n) ;++i)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1 ;
}
int main()
{
	int t ;
	scanf("%d",&t);
	while(t--)
	{
		int a ;
		scanf("%d", &a);
		for( int i = 2; i <= a/2 ; ++i)
		{
			int b = a - i;
			if(snt(i)==1 &&  snt(b) == 1)
			{
				printf("%d %d ", i , b);
			} 
		}
		printf("\n");
	}
}