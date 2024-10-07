#include<stdio.h>
int uocchung(int t , int u){
int e ;
	while(u>0){
	e=t%u;
	t=u;
	u=e;
}
return t ;
}
int main(){
	int a , b , i , j ;
	scanf("%d %d", &a , &b);
	for (i=a;i<=b;++i){
		for(j=i;j<=b;++j){
			if(uocchung(i,j)==1){
				printf("(");
				printf("%d",i);
				printf(",");
				printf("%d",j);
				printf(")\n");
			}
		}
	}
}