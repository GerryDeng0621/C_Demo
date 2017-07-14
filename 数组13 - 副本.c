#include<stdio.h>
void add(int*x,int*y,int*z,int i)  //函数无类型，返回函数return;可以不要
{
	int j;
	for(j=0;j<10;j++)
		*(z+j)=*(x+j)+*(y+j);
}
int main()
{
	int a[10]={1,0,3,4,5,6,7,8,9,10};
	int b[10]={10,9,8,7,6,5,4,3,2,1};
	int c[10];
	int j;
	add(a,b,c,10);
	for(j=0;j<10;j++)
		printf("%d\t",c[j]);
	return 0;
}