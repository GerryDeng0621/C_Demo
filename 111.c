#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;
	printf("请输入一个x:");
	scanf("%lf",&x);
	y=sqrt(x*x-2.0*x+3.0*x*x*x);
	printf("输出y:");
	printf("%lf\n",y);
	system("pause");
	return 0;
}