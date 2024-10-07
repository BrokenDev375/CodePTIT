#include<stdio.h>
#include<math.h>
int skg(int n){
	int a  ;
	int b = 10 ;
	while(n>0){
		a=n%10;
		if(a>b){
			return 0 ;
		}
		n/=10;
		b=a;
	}
	return 1 ;
}
int scs(int n){
	int a = pow(10,n-1);
	int b =pow(10,n);
	for(int i=1*a;i<=1*b-1;++i){
		if(skg(i)==1){
			printf("%d ", i);
		}
	}
}
int main(){
	int a , t ;
	scanf("%d", &t);
	while(t--){
	scanf("%d",&a);
	scs(a);
	printf("\n");
}
}