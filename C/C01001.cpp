#include<stdio.h>
int main(){
	int i ;
	long a ;
	scanf("%d",&i);
	while(i>=1){
	scanf("%ld",&a);
	printf("%ld",2*a);
	i--; printf("\n") ;
	}
	return 0;
}