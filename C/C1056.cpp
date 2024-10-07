#include<stdio.h>
int main(){
	int b, c ,i;
	long a;
	scanf("%d",&i);
	while(i--){
		scanf("%ld",&a);
		b=a%10;
		while(a>0){
			a=a/10;
			c=a%10;
			if(b<c){
				printf("NO\n");
				break ;
				
			}
			
		}
		if(a==0){
			printf("YES\n");
		}
		}
	}
