#include<stdio.h>
int main()
{
	void average(int*p,int n);
	void found(int(*q)[4],int m);
	int a[3][4]={65,67,70,60,80,87,90,81,90,99,100,98};
	int i;
	average(*a,12);  //ʵ������ûprintf���������ô��������������Ҫ�����
	printf("������ѧ�����:\n");
	scanf("%d",&i);
	found(a,i);
	return 0;
}
void average(int*p,int n)
{
	int sum=0,ave,*p1;
	p1=p+n-1;
    for(;p<=p1;p++) //Ϊʲô ����p<=p+n-1�ͳ�����Ϊ���Լ���p++,��û����ֹ������ѭ����
	{
		sum=sum+(*p);
	}
	ave=sum/n;
	printf("���еķ�����ƽ��ֵΪ%d\n",ave);
}
void found(int(*q)[4],int m)
{
	int i;
	printf("��ѧ�������ģ���ѧ��Ӣ�����ķ����ֱ�Ϊ:\n");
	for(i=0;i<4;i++)
	{
		printf("%d\t",*(*(q+m)+i));
	}
	printf("\n");
}

		

	
	
	

