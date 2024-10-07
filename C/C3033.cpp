#include<stdio.h>
#include<math.h>
void solve(int n)
{
	int m=n;
	       printf("%d =",m);
    for(int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            int dem = 0;
            while (n % i == 0)
            {
                n /= i;
                dem++;
        }
        	printf(" %d^%d ", i , dem);
            if( n!=1){
            	printf("*");
			}
            if (n == 1)
            {
                printf("\n");
                return;
            }
        }
    if (n > 1)
        printf(" %d^1\n", n);
}
int main(){
	int t , a;
	scanf("%d",&t);
	while(t--){
		scanf("%d", &a);
		solve(a);
	}
}