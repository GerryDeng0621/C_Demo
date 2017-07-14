#include<stdio.h>
int main()
{
	int add(int x[],int y[]);
	int a[10]={0,0,3,4,5,6,7,8,9,10};
	int b[10]={10,9,8,7,6,5,4,3,2,1};
	int c[10];
	int i;
	for(i=0;i<=9;i++)
	{
		printf("%d\t",a[i]);
	}	
	for(i=0;i<=9;i++) 
	{
		printf("%d\t",b[i]);
	}
	for(i=0;i<=9;i++)
	{
		c[i]=add(&a[i],&b[i]);
		printf("%d\t",c[i]);
	}
	return 0;
}
int add(int x[],int y[])
{
	int z,i;
	for(i=0;i<=9;i++)
	{
		z=*x+*y;
	}
	return z;
}


	
