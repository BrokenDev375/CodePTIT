#include<stdio.h>
#include<math.h>
int main(){
	int a , i , b , c , j , d ;
	scanf("%d",&i);
	while(i--){
	scanf("%d",&a);
	b = 0 ;
for(j=1 ; j < sqrt(a) ; j++){
	if(a%j == 0){
		if(j%2 == 0)
		b++;

		if((a/j) % 2 == 0)
			b++;
		}
	
}
int c= sqrt(a);
if(c*c == a && a%2== 0){
	++b;
}
printf("%d\n",b);
}
}