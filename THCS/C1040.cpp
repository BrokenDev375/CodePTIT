#include <stdio.h>
int main(){
	int a , i , s ;
	scanf("%d",&a);
	s=0;
	for(i=1;i<a;++i){
		if(a%i==0){
			s=s+i;
		}
	}
	if(s==a){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0 ; 
}