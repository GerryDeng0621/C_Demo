#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4-i;j++)
			printf(" ");
		for(n=1;n<=2*i-1;n++)
			printf("*");    //   \n 放在*后与外面的结果不同，前者的意思为每输入一个*就换行，后者为shu完了才换行。
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(n=1;n<=7-2*i;n++)  //    \n一定要在" "里面
			printf("*");
		printf("\n");
	}
	return 0;
}


			

