#include<stdio.h>
int main(){
	int i ;
	double a ;
	scanf("%d",&i);
	while(i>=1){
		scanf("%lf",&a);
		printf("%.15lf",1/a) ;
		i-- ;
		printf("\n");
	}
	return 0 ;
}