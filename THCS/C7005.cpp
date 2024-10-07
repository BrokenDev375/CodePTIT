#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
struct area
{
	double x1 , y1 , x2 , y2 , x3 , y3 , cv ;
	double edge1 , edge2 ,edge3 ; 
} ;
typedef struct area area ;
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		area tri ;
		scanf("%lf %lf %lf %lf %lf %lf", &tri.x1 , &tri.y1 ,&tri.x2 , &tri.y2 , &tri.x3 , &tri.y3) ;
		tri.edge1 = sqrt((tri.x2 - tri.x3) * (tri.x2 - tri.x3) + (tri.y2 - tri.y3) * (tri.y2 - tri.y3)) ;
		tri.edge2 = sqrt((tri.x1 - tri.x3) * (tri.x1 - tri.x3) + (tri.y1 - tri.y3) *  (tri.y1 - tri.y3)) ;
		tri.edge3 = sqrt((tri.x1 - tri.x2) * (tri.x1 - tri.x2) + (tri.y1 - tri.y2) * (tri.y1 - tri.y2)) ;
		int check = 1 ;
		if( tri.edge1 + tri.edge2 <= tri.edge3 || tri.edge2 + tri.edge3 <= tri.edge1 || tri.edge1 + tri.edge3 <= tri.edge2)
		{
			check = 0 ;
		}
		if( check == 0)
		{
			printf("INVALID\n") ;
		}
		else
		{
			tri.cv = tri.edge1 + tri.edge2 + tri.edge3 ;
			printf("%.3lf\n",tri.cv) ;
		}
	}
}