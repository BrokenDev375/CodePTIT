#include<stdio.h>
#include<math.h>
int snt( int  n )
{

	for	(int i = 2; i <= sqrt(n) ;++i)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1 ;
}
int cs( int n)
{
	int sum = 0 ;
	while( n > 0)
	{
		int a = n % 10 ;
		sum += a ;
		if( a!= 2 &&a != 3 && a != 5 && a!= 7)
		{
			return 0 ;
		}
		n /= 10 ;
	}
	if(!snt(sum))
	{
		return 0 ;
	}
	return 1 ;
}
void solve()
{
	int a , b ;
	int dem = 0 ;
	scanf("%d %d", &a , &b) ;
	for( int i = a ; i <= b ; i++)
	{
		if( cs(i))
		{	
			if( snt(i))
			{
				
					dem++ ;
			}
		}
	}
	printf("%d\n", dem) ;
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