#include<stdio.h>
int main()
{
	void print_star();
	void print_sm();
	int max(int x,int y);  //�β�ʵ�ʲ�ռ�ڴ棬ֻ������ʱ��һ��
    int a,b,c;   //�����ʵ�εý��Ӷ�Ӧ�������βκ���
	print_star();
	print_sm();
	print_star();
	printf("a=");
	scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
	c=max(a,b);
	printf("max=%d\n",c);  //����ӦΪc����Ϊmax�Ǹ���c
	system("pause");
	return 0;
}
void print_star()
{
	printf("***********************************\n");
}
void print_sm()
{
	printf("��ʼ����a,b�������������ֵ,������!\n");
}
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return z;
}

