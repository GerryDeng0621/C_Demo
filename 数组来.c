#include<stdio.h>
int add(int *a,int *b)
{
	int c;
	c=*a+*b;
	return c;
}
int main()
{
	int a[]={1,0,3,4,5,6,7,8,9,10};
	int b[]={10,9,8,7,6,5,4,3,2,1};
	int c[10],i;
	for(i=0;i<10;i++)
	{
		c[i]=add(&a[i],&b[i]);  //add(a,b)ÊÇ´íµÄ
		printf("%d\t",c[i]);
	}
	printf("\n");
	return 0;
}