#include<stdio.h>
#include<math.h>
int main(){
	int a ,b,j ,i=2;
	scanf("%d",&b);
	while(b>0){
		j=0;
	scanf("%d",&a);
	if(a<2){
		printf("NO");
	}
	
	if(a>=2){
		for(i=2;i*i<=a;++i){
			if(a%i==0){
				++j;
			}
		}
			if(j>0){
				printf("NO");
			}
			else{ printf("YES");
		}
		--b;
		printf("\n");
		}
		
	}
	return 0 ;
	
}