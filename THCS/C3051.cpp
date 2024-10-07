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
	scanf("%d", &t);
	while (t--)
	{
		int dem = 0 ;
		long long a , b ;
		scanf("%lld %lld", &a ,&b);
		for(int i = sqrt(a); i <= sqrt(b) ;++i )
		{
			if(snt(i) == 1){
			++dem ;
			}
		}
		printf("%d", dem);
	} 
	
}