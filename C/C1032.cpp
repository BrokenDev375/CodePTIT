#include<stdio.h>
#include<math.h>
int snt( int n )
{

	for	(int i = 2; i <= sqrt(n) ;i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1 ;
}

int main()
{	
	int t;
	scanf("%d", &t);
	while(t--)
	{
	int c ;
	int p = 1 ;
	scanf("%d", &c);
	int a = 1 ;
	for( int i = 2 ; i <= sqrt(c) + 1; i++)
	{
		if( snt(i) && c % i == 0)
		{
			p *= i ;
			while(c % i == 0)
			{
			c /= i ;
			}
			a = i ;
		}
	}
	if(snt(c) && c != a )
	{
		p *= c ;
	}	
	printf("%d\n",p);
	}
	return 0 ;
}
