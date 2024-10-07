#include<stdio.h>
int main(){
	int a , b , i ;
	scanf("%d", &i);
	while(i--){
	scanf("%d", &a);
	b=0;
	while(a>0){
		b+=a%10;
		a=a/10;
	}
	if(b%10==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	printf("\n");
}
}