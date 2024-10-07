#include <stdio.h>
#include<math.h>
int main(){
	double a,b,c ,delta;
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c ;
	if(a==0){
		if(b==0){
			printf("NO");
		}
	else{
		printf("%.2lf",(-1*c)/b);
	}
}
	else{
		if(delta>0){
			printf("%.2lf %.2lf",((-1*b)+sqrt(delta))/2*a,((-1*b)-sqrt(delta))/2*a);
		}
		if(delta==0){
			printf("%.2lf",(-1*b)/(2*a));
		}
		if(delta<0){
			printf("NO");
		}
	
	}
	return 0 ;
}