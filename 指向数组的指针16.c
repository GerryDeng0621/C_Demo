#include<stdio.h>
int main()
{
	void average(int*p,int n);
	void found(int(*q)[4],int m);
	int a[3][4]={65,67,70,60,80,87,90,81,90,99,100,98};
	int i;
	average(*a,12);  //实参这里没printf来输出，那么定义那里，即下面就要输出。
	printf("请输入学生序号:\n");
	scanf("%d",&i);
	found(a,i);
	return 0;
}
void average(int*p,int n)
{
	int sum=0,ave,*p1;
	p1=p+n-1;
    for(;p<=p1;p++) //为什么 这里p<=p+n-1就出错，因为它自己在p++,就没有终止，即死循环。
	{
		sum=sum+(*p);
	}
	ave=sum/n;
	printf("所有的分数的平均值为%d\n",ave);
}
void found(int(*q)[4],int m)
{
	int i;
	printf("该学生的语文，数学，英语，物理的分数分别为:\n");
	for(i=0;i<4;i++)
	{
		printf("%d\t",*(*(q+m)+i));
	}
	printf("\n");
}

		

	
	
	

