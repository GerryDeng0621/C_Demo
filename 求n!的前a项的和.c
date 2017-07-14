#include <stdio.h>
int main()
{
	int i,t,sum,a;
	i=2;
	sum=1;
	printf("请输入一个正整数:");
	scanf("%d",&a);
	while(i<=a)
	{
		t=sum*i;
		sum=sum+t;
		i=i+1;
	}
	    printf("输出的和为:");
		printf("%d\n",sum);
		system("pause");
		return 0;
}



		