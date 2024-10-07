#include<stdio.h>
int ucln(int a , int b){
	int e;
    if(a>b){
	while(b>0){
	e=a%b;
	a=b;
	b=e;
	return a;		
	}
}
else{
			while(a>0){
				e=b%a;
				b=a;
				a=e;
			}
			return  b ;
		}
}
int main(){
	int a , b , c , d , t;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d %d %d",&a ,&b , &c , &d);
	if(ucln(a,b)==ucln(c, d)){
		printf("YES");
	}
	else{
		printf("NO");
	}
	printf("\n");
	
}
}