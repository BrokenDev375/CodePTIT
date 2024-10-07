#include<stdio.h>
#include<math.h>
int main(){
	int n , i , a ;
	scanf("%d",&i);
	while(i>=1){
	scanf("%d",&n);
	a=sqrt(n);
	if(a*a==n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	--i;
	}
	return 0 ;
}
	
	
	