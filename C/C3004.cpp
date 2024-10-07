#include <stdio.h>
int main(){
	long a , b , c , d  , e ;
	scanf("%ld %ld", &a , &b);
	c=a;
	d=b;
	if(a>b){
	while(b>0){
	e=a%b;
	a=b;
	b=e;		
	}
	printf("%ld\n",a);
	printf("%ld",c*d/a);
}
		else{
			while(a>0){
				e=b%a;
				b=a;
				a=e;
			}
			printf("%ld\n",b);
		printf("%ld",c*d/b);
			
		}
}

