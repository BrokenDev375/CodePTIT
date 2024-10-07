#include<stdio.h>
int main(){
	int i ;
	long a ;
	scanf("%d",&i);
	while(i>=1){
		scanf("%ld",&a);
		printf("%ld",a*a);
		i--;
		printf("\n");
	}
	return 0 ;
}