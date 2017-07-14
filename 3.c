#include<stdio.h>
#include<math.h>
int main()
{
	double r5,r3,r2,r1,r0,p,p5,p3,p2,p1,p0;
	r5=0.0585;
	r3=0.054;
	r2=0.0414;
	r1=0.014;
	r0=0.072;
	p=1000;
	p5=p*(1+5*r5);
	p3=p*(1+2*r2)*(1+3*r3);
	p2=p*(1+3*r3)*(1+2*r2);
	p1=p*pow(1+r1,5);
	p0=p*pow(1+r1/4,4*5);
	printf("p5=%lf\n",p5);
	printf("p3=%lf\n",p3);
	printf("p2=%lf\n",p2);
	printf("p1=%lf\n",p1);
	printf("p0=%lf\n",p0);
	return 0;
}
