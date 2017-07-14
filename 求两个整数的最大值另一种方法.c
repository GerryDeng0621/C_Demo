#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入两个整数:");
	scanf("%d,%d",&a,&b);
	if (a<b)
		printf("max=%d\n",b);
	else
		printf("max=%d\n",a);
	return 0;
}