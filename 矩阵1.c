#include<stdio.h>
int main()
{
	int i,j,n=0;
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++,n++)   /*n=0���ܷ����棬��ȻЧ���ﲻ��.����ѭ��������ĸ���ֵn=0;if���n!=0��ܵ�����ѭ����*/

		{
			if(n%5==0&&n!=0)
				printf("\n");
			printf("%d\t",i*j);
		}
		printf("\n");
		return 0;
}

			