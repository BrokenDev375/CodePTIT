#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool stnghich(int n){
	int m=n ; 
	int u = 0 ;
	while(n>0){
		u=u*10+n%10;
		n/=10;
	}
	if(u==m){
		return 1 ;
	}
		return 0 ;
	}
bool snto(int l){
if(l<2){
	return 0 ;
}
	for( int k=2 ; k<=sqrt(l) ; k++){
		if(l%k==0){
			return 0;
		}
}
	return 1;
}

void start(){
	int a , b , i , j;
	j=0;
	scanf("%d %d", &a , &b);
	for(i=a;i<=b;++i){
		if(stnghich(i)==1 && snto(i)==1){
			++j;
			printf("%d ", i );
				if(j%10==0){
			printf("\n");
		}
		}
	}
}
int main(){
	int T ;
	scanf("%d", & T);
	while(T--){
	 start();
	 printf("\n");
	}
	return 0 ;
}
	

