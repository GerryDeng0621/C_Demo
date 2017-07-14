#include<stdio.h>
int main()
{
	int a,i,k;
	printf("请输入一个整数a=");
	scanf("%d",&a);
	k=abs(a);
	if(a>0)
		if(k==1||k==2)
			if(k==1)
				printf("既不是质数，也不是合数。\n");
	        else
				printf("这是个质数。\n");
		else
		{
			for(i=2;i<=k-1;i++)
				if(k%i==0)break;
		        if(i<k)
					printf("这是个合数。\n");
		        else
			        printf("这是个质数。\n");
		}
	if(a==0)
		printf("这是个合数。\n");
	if(a<0)
		if(k==1||k==2)
			if(k==1)
				printf("既不是质数，也不是合数。\n");
			else
				printf("这是个质数。\n");
		else
		{
			for(i=2;i<=k-1;i++)
				if(k%i==0)break;
				if(i<k)
					printf("这是个合数。\n");
				else
					printf("这是个质数。\n");
		}
		system("pause");
	return 0;
}
		
	


		


			
