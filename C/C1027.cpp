#include<stdio.h>
int main(){
	int a ,b ,i ,j , h;
	scanf("%d",&h);
	while(h>0){

	scanf("%d %d",&a ,&b );
	for(i=1; i<=a && i<=b;i++){
		if(a%i==0 && b%i ==0){
			j= i ;
		}
	}
	printf("%d",j);
	--h;
	printf("\n");
}
return 0 ; 
}