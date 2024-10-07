#include<stdio.h>
#include<math.h>
long long bcnn( long long a, int b)
{
	double c = a , d = b ;
	while(b != 0){
    int r = a % b;
    a = b;
    b = r;
   }
   return c / a * d;
}
int main()
{
	int t ;	
	scanf("%d", &t) ;
	while(t--)
	{
		int a , b , dem = 0 ; long long bs = 1;
		scanf("%d %d", &a , &b) ;
		for( int i = a ; i <= b ; i++)
		{
			bs = bcnn(bs , i) ;
		}
		printf("%lld\n", bs) ;
	}
}
