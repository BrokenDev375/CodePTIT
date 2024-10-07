#include<stdio.h>
int gt(int n){
	int p=1;
	if(n==0){
		return p;
	}
	for(int i =1 ; i<=n;++i){
		p*=i;
	}
	return p;
}
int main(){
	int a , i , j;
	scanf("%d", &a);
	for(i=0;i<a;++i){
		for(j=0;j<=i;++j){
			printf("%d ",gt(i)/gt(j)/gt(i-j));
		}
		printf("\n");
		}
	}
