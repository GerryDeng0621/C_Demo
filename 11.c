#include <stdio.h>
#include <math.h>
int main()
{
	float x,y;
	printf("请输入一个x:");
	scanf("%f",&x);
	y=sqrt(abs(x*x-2*x+3*x*x*x));//abs是绝对值。
	printf("输出y:");
	printf("%f\n",y);
	system("pause");
	return 0;
}