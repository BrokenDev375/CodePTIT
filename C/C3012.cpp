#include<stdio.h>
int fibonacci(long n){
	int f1 =0 ; 
	int f2 =1;
	int fn ,a  ;
	if(n==1 || n==0){
		return 1 ;
	}
	while(fn<=n){
		fn=f1+f2;
		if(fn==n){
			return 1 ;
		}
		f1=f2;
		f2=fn;
	}
	return 0 ;
}
int main(){
	long a ;
	scanf("%ld",&a);
	if(fibonacci(a)==1){
		printf("1");
	}
	else{
		printf("0");
	}
}