#include <stdio.h>
int main(){
	long a , b , c , d  , e  ;
	int t ;
	scanf("%d",&t);
	while(t--){
	scanf("%ld %ld", &a , &b);
	c=a;
	d=b;
	if(a>b){
	while(b>0){
	e=a%b;
	a=b;
	b=e;		
	}
	printf("%ld ",c*d/a);
		printf("%ld",a);
}
		else{
			while(a>0){
				e=b%a;
				b=a;
				a=e;
			}
		printf("%ld ",c*d/b);
		printf("%ld",b);
		}
		printf("\n");
		}
}
