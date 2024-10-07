#include<stdio.h>
#include<math.h>
int kts(int n ){
	if(n<2){
	return 0 ;
}
	for(int i = 2;i<=sqrt(n);++i){
		if(n%i==0){
			return 0;
		}
	}
	return 1 ;
}
int ktcs( int n){
	while(n>0){
		int a = n%10;
		if(kts(a)==0){
			return 0 ;
		}
		n/=10;
	}
	return 1 ;
}
int main(){
	int a, b , i , dem, t;
	scanf("%d", &t);
	while (t--){
		dem=0;
		scanf("%d %d",&a , &b);
		for(i=a;i<=b;++i){
			if(kts(i)==1 && ktcs(i)==1){
				++dem;
			}
		}
		printf("%d\n",dem);
	}
}