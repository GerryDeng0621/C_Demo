#include <stdio.h>
int main()
{
	int i,t,sum,a;
	i=2;
	sum=1;
	printf("������һ��������:");
	scanf("%d",&a);
	while(i<=a)
	{
		t=sum*i;
		sum=sum+t;
		i=i+1;
	}
	    printf("����ĺ�Ϊ:");
		printf("%d\n",sum);
		system("pause");
		return 0;
}



		