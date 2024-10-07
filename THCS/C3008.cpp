#include <stdio.h>
#include<math.h>
int shh(int n){
	int s=1;
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0){
			s+=i;
		if(i!=sqrt(n)){
			s+=n/i;
		}
		}
	}
	if(n==s){
		return 1;
	}
	return 0 ;
}
int main(){
	int a , i;
	scanf("%d", &a );
	for (int i = 2 ; i<=a ; ++i){
		if(shh(i)==1){
			printf("%d ",i);
		}
	}
	return 0 ;
}