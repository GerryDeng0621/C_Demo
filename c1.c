#include<stdio.h>
int main()
{
	void print_star();
	void print_sm();
	int max(int x,int y);  //形参实际不占内存，只在运行时用一下
    int a,b,c;   //定义的实参得紧接对应声明的形参后面
	print_star();
	print_sm();
	print_star();
	printf("a=");
	scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
	c=max(a,b);
	printf("max=%d\n",c);  //这里应为c，因为max是赋给c
	system("pause");
	return 0;
}
void print_star()
{
	printf("***********************************\n");
}
void print_sm()
{
	printf("开始计算a,b两个整数的最大值,请输入!\n");
}
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return z;
}

