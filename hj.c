#include<stdio.h>
#define SUM 1000
int main()
{
	int i,t,sum;
	for(sum=0,i=1; ;i++)
	{
		t=i*(i+1);
		sum=sum+t;
		if(sum>=SUM)break;
	}
	printf("sum=%d\n",sum);
	return 0;
}

	