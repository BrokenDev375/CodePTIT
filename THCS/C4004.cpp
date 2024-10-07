#include<stdio.h>
int main()
{
	int t , a ;
	long long F[92];
	F[0] = 0 ;
	F[1] = 1 ;
	for( int i = 2 ; i <= 92 ; i++)
	{
		F[i] = F[i-1] + F[i-2];
	}
	scanf("%d", &t) ;
	while(t--)
	 {
	 	scanf("%d", &a);
	 	printf("%lld\n", F[a]);
	 }
}