#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4-i;j++)
			printf(" ");
		for(n=1;n<=2*i-1;n++)
			printf("*");    //   \n ����*��������Ľ����ͬ��ǰ�ߵ���˼Ϊÿ����һ��*�ͻ��У�����Ϊshu���˲Ż��С�
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(n=1;n<=7-2*i;n++)  //    \nһ��Ҫ��" "����
			printf("*");
		printf("\n");
	}
	return 0;
}


			

