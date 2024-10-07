#include<stdio.h>
#include<math.h>
int tn(int n)
{
    int m = 0, tmp = n;
    while(n != 0)
	{
        m = m * 10 + n % 10;
        n /= 10;
    }
    if(tmp == m)
	{
        return 1;
    }
    return 0;
}
int s9( int n )
{
	while( n > 0)
	{
		if( n % 10 == 9)
		{
			return 0 ;
		}
		n /= 10 ;
	}
	return 1 ;
}
int main()
{
	int n ;
	int s = 0 ;
	scanf("%d", &n) ;
	for( int i = 2 ; i < n ; i++)
	{
		if(s9(i) &&tn (i))
		{
			printf("%d ", i) ;
			s++ ;
		}
	}
	printf("\n%d",s) ;
}