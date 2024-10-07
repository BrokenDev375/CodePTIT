#include<stdio.h>
#include<math.h>
int main(){
int a, b, c, i, j;
scanf("%d",&a);
c=a;
i=0;
while(c>0){
	c=c/10;
	++i;
}
b=a-a/10*10;
a=a/10*10;
c=a;
for(j=1;j<i;++j){
	c=c/10;
}
b=b*pow(10,j-1)+a-c*pow(10,j-1)+c;

printf("%d",b);
return 0 ;
}