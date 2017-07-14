#include<stdio.h>
int main()
{
	double a,b,c,max;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	max=a>b?a:b;
	max=max>c?max:c;
	printf("%lf\n",max);
	system("pause");
	return 0;
}