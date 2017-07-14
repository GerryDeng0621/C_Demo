#include<stdio.h>
int main()
{
	int i,a;
	printf("这是输出100~1000间的质数\n");
	for(a=101;a<1000;a++)
	{
		for(i=2;i<=a-1;i++)
			if(a%i==0)break;
		    if(i>=a)
				printf("%d\t",a);
	}
			if(a%10==0)
				printf("\n");
		system("pause");
	return 0;
}
		
			



			