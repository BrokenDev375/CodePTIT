#include <stdio.h>
#include<math.h>
int strong(int n){
	int i, a , p ;
	int s=0 ;
	int m=n;
	while(n>0){
		a=n%10;
		p=1 ;
		for(i=2;i<=a;++i){
			p*=i;
		}
		s+=p;
		n/=10;
	}
	if(m==s){
		return 1;
	}
	return 0;
}
int main(){
	int a , i ;
	scanf("%d",&a);
	for(i=1;i<a;++i){
		if(strong(i)==1){
			printf("%d ",i);
		}
	}
	
}