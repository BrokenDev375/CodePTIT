#include<stdio.h>
int db(long n){
	while(n>0){
		if(n%2!=0){
			return 0 ;
		}
		n/=10;
	}
	return 1 ;
}
int sc(long n){
	if(n%2==0){
		return 1;
	}
	return 0;
}
int main(){
	int t ;
	long a;
	scanf("%d", &t);
	while(t--){
	scanf("%ld", &a);
	if(sc(a)==1 && db(a)==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	printf("\n");
}
}