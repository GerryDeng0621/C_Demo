#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c;
	printf("请输入两个整数：");
    scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("max=%d\n",c);
	return 0;
}
int max(int x,int y)   //不能有分号
{
	int z;
	if(x>y)z=x;
	else z=y;
 system("pause");
	return(z);
}
