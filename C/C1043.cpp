#include<stdio.h>
int main(){
	int a, i , c, s , j ;
	scanf("%d",&a);
	j=a;
	s=0 ;
	
while(j>0){
	c=1;
	for(i=1;i<=j%10;++i){
		c*=i;
	}
	s+=c ;
	j=j/10;
}
if(s==a){
	printf("1");
}
else{
	printf("0");
}
return 0 ;
	
}