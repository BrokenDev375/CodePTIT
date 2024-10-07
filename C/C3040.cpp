#include <stdio.h>
#include <math.h>
int tcs( int n )
{
	int s = 0 ;
	while( n > 0 )
	{
		s += n%10 ;
		n/=10;
	}
	return s ;
}
int tts(int n)
{   
 	int b ;
	int s = 0 ;
	for(int i = 2 ; i <= sqrt(n) ; i++)
	{
		if( n % i == 0)
		{
			while ( n % i == 0)
			{
			n/=i;
			b = tcs(i);
		  	s+=b;
	}
	
	
}
}
	if(n > 1 && n<10)
	{
		s+=n;
	 }
	 if( n >= 10){
	  	 b = tcs(n);
	 	s+=b;
	}
	 return s ;
}
int main()
{
	int a ;
	scanf("%d",&a);
	if( tts(a) == tcs(a) && a >=4 )
	{
		printf("YES");
	}
	else 
	{
		printf("NO");
	}
}