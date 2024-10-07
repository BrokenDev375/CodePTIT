#include<stdio.h>
int main()
{
	int t ;
	int a , b , c ;
		int A[101] , B[101] ;
	scanf("%d", &t);
	for( int j = 1 ; j <= t ; j++)
	{
		scanf("%d %d %d", &a , &b, &c);
		for( int i = 0 ; i < a ; i++)
		{
			scanf("%d ", &A[i]);	
		}
		for( int i = 0 ; i < b ; i++)
		{
			scanf("%d ", &B[i]);
		}	
		printf("Test %d:\n", j) ;
		for (int i = 0; i < a + b; i++)
    {
        if (i < c)
            printf("%d ", A[i]);
        else if (i >= c && i < c + b)
            printf("%d ", B[i - c]);
        else
            printf("%d ", A[i - b]);
    }
		printf("\n");
	}
}
