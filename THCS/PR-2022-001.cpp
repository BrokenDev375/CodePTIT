#include<stdio.h>
#include<math.h>
int main()
{
	int u0 , d , N ;
	scanf("%d %d %d", &u0 , &d , &N) ;
	long long sum = 0;
	for( int i = 0 ; i < N ; i++)
	{
		sum += u0 ; 
		u0 += d ;
	}
	printf("%d",sum) ;
}