#include <stdio.h>
#include <math.h>
int main()
{
	float x,y;
	printf("������һ��x:");
	scanf("%f",&x);
	y=sqrt(abs(x*x-2*x+3*x*x*x));//abs�Ǿ���ֵ��
	printf("���y:");
	printf("%f\n",y);
	system("pause");
	return 0;
}