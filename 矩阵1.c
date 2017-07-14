#include<stdio.h>
int main()
{
	int i,j,n=0;
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++,n++)   /*n=0不能放里面，不然效果达不到.对于循环体里面的赋初值n=0;if里的n!=0会管到整个循环。*/

		{
			if(n%5==0&&n!=0)
				printf("\n");
			printf("%d\t",i*j);
		}
		printf("\n");
		return 0;
}

			