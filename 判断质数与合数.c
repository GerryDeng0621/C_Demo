#include<stdio.h>
int main()
{
	int a,i,k;
	printf("������һ������a=");
	scanf("%d",&a);
	k=abs(a);
	if(a>0)
		if(k==1||k==2)
			if(k==1)
				printf("�Ȳ���������Ҳ���Ǻ�����\n");
	        else
				printf("���Ǹ�������\n");
		else
		{
			for(i=2;i<=k-1;i++)
				if(k%i==0)break;
		        if(i<k)
					printf("���Ǹ�������\n");
		        else
			        printf("���Ǹ�������\n");
		}
	if(a==0)
		printf("���Ǹ�������\n");
	if(a<0)
		if(k==1||k==2)
			if(k==1)
				printf("�Ȳ���������Ҳ���Ǻ�����\n");
			else
				printf("���Ǹ�������\n");
		else
		{
			for(i=2;i<=k-1;i++)
				if(k%i==0)break;
				if(i<k)
					printf("���Ǹ�������\n");
				else
					printf("���Ǹ�������\n");
		}
		system("pause");
	return 0;
}
		
	


		


			
