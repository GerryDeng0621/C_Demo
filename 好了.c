#include<stdio.h>
int main()
{
	double p,r,n;
	r=0.1;
	p=1.0;
	for(n=1;n<=10;n++)
	{p=p*(1+r);}
	printf("p=%lf\n",p);
	return 0;
}

