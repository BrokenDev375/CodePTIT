#include <stdio.h>
#include<math.h>
int main(){
int j;
scanf("%d",&j);
while(j--){
	int a, i  ;
	scanf("%d",&a);
	for (i=2;i<=sqrt(a);i++){
		while(a%i==0){
			printf("%d ",i);
	
		a/=i ;
		
	}
	
	
}
if(a!=1){
	printf("%d",a);
	printf("\n");
}
	
}
}	

