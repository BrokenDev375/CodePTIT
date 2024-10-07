#include<stdio.h>
int main()
{
	int a , b ;
	scanf("%d %d", &a , &b);
	int A[101] , B[101] ;
	for( int i = 0 ; i < a ; i++)
	{
		scanf("%d ", &A[i]);	
	}
	for( int i = 0 ; i < b ; i++)
	{
		scanf("%d ", &B[i]);
	}
	int c ;
	scanf("%d", &c);
	for( int i = c ; i < a  ; i++  )
	{
		A[i + b] = A[i] ;
	}
	for( int i = c ; i < b + c ; i++)
	{
		A[i] = B[i-c];
	}
	for( int i = 0 ; i < a + b  ; i++)
	{
		printf("%d ", A[i]);
	}
}
