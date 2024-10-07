#include<stdio.h>
int fibonacci(int n){
	long f1 =0 ; 
	long f2 =1;
	long fn  ;
	int i ;
	if(n==1){
		printf("%ld ",f1);
	}
	else{
		printf("%ld %ld ", f1 ,f2);
	}
for(i=1;i<=n-2;++i){
		fn=f1+f2;
		printf("%ld ",fn);
		f1=f2;
		f2=fn;
	}
	}
int main(){
	int a ;
	scanf("%d",&a);
	fibonacci(a);

}
