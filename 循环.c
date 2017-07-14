#include<stdio.h>
int main()
{
	double sum,t,i;
	sum=0;
	for(i=1;i<=100000000;i++)
	{
		t=1/(i*i);
		sum=sum+t;
	}
	printf("sum=%6.6lf\n",sum);
	return 0;
}

		
