#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2,disc,realpart,imagpart;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	if(fabs(a)<=1e-6)
		printf("这不是一元二次方程，请自己计算.\n");
	else
	{
		disc=b*b-4*a*c;
		if(fabs(disc)<=1e-6)
		{
			x1=-b/(2*a);
		    x2=-b/(2*a);
		    printf("x1=%6.6lf\nx2=%6.6lf\n",x1,x2);
		}
		else
			if(disc>1e-6)
			{
				x1=(-b-sqrt(disc))/(2*a);
			    x2=(-b+sqrt(disc))/(2*a);
			    printf("x1=%6.6lf\nx2=%6.6lf\n",x1,x2);
			}
			else
			{
			  realpart=-b/(2*a);
			  imagpart=sqrt(-disc)/(2*a);
			  printf("x1=%6.6lf-%6.6lfi\n",realpart,imagpart); 
			  printf("x2=%6.6lf+%6.6lfi\n",realpart,imagpart);
			}
			
	}
	system("pause");
	return 0;
}
				
			
			





