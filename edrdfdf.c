#include<stdio.h>
int intadd(int*a,int*b,int*c,int i)
{
	int j;
	for(j=0;j<10;j++)
		c[j]=a[j]+b[j];
	return c[j];
}
int main()
{
	int a[10]={1,0,3,4,5,6,7,8,9,10};
	int b[10]={10,9,8,7,6,5,4,3,2,1};
	int c[10];
	int  j;
	intadd(a,b,c,10);
	for(j=0;j<10;j++)
		printf("%5d",c[j]);
	printf("\n");
	return 0;
}