#include<stdio.h>
int main()
{
	double a[20],t;
	int i,j;
	printf("请输入20个实数,并用空格隔开:\n");
    for(i=0;i<=19;i++)
		scanf("%lf",&a[i]);
	  for(j=0;j<19;j++)
		  for(i=0;i<19-j;i++)
			  if(a[i]>a[i+1])
			  {t=a[i];a[i]=a[i+1];a[i+1]=t;}
			  printf("从小到大排列为:\n");//这里的没有定义a[i],这是变量，必须循环输出。   
    for(i=0;i<=19;i++)
		printf("%6.2lf\t",a[i]); //必须告诉别人这是怎么输出的，要不然就不知道要循环输出。
	system("pause");
	return 0;
}
	



			  
	  
		
	
