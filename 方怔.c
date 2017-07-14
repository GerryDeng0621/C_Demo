#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=100;i++)
		for(j=1,n=0;j<=10;j++,n++)
		{
			if(n%10==0)
				printf("\n");
			printf("%d\t",i*j);
		}
	printf("\n");
	system("pause");
	return 0;
}
		
