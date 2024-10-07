#include<stdio.h>
int tcs(int n){
	int s=0;
	int m=n;
	while(m>0){
		s+=m%10;
		m/=10;
	}
	return s;
}
int main(){
	int a , b ;
	scanf("%d %d", &a , &b);
	if(tcs(a)<=tcs(b)){
		printf("%d %d", a , b);
	}
	else{
		printf("%d %d", b , a);
	}
}