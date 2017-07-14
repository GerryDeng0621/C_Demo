#include<stdio.h>
int main()
{
	int a[5];
	int i,j,t; //这里的t用来转换
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(i=0;i<=3;i++)
		for(j=0;j<=3-i;j++)
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}
			
			




		

		
