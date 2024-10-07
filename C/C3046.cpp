#include<stdio.h>
#include<math.h>
int mm(int n)
{
	int x ;
	int dem= 0 ;
	int u=0 ;
	int m = n ;
	while(n > 0)
	{
		x=n%10;
		if(x == 4){
			return 0 ;
		}
		dem+=x ;
		u=u*10+n%10;
		n/=10;
	}
	if(u == m && dem % 10 == 0)
	{
	return 1 ;
	}
	return 0 ;
}
int main()
{
	int t , n , a , b ;
	scanf("%d", &t);
	while(t--)
	{
	scanf("%d", &n );
	a=pow(10,n-1);
	b=pow(10,n)-1;
	for( int i=a ; i <= b ; ++i)
	{
		if( mm(i) == 1 )
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	}
	return 0 ; 
	 }

