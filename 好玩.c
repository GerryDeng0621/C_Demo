#include<stdio.h>
int main()
{
	void print_star();
	void print_sm();
	print_star();
	print_sm();
	print_star();
    char str[100];
	int t;
	gets(str);
	printf("��������1,2,3�е�һ�����֡����������ˣ�����!\n");
	scanf("%d",&t);
	switch(t)
	{
	case 1:printf("%s�и����Ӻ���������Ӵ!\n",str);break;
	case 2:printf("%s������ô?\n",str);break;
	case 3:printf("%sꡱ�һ��!\n",str);break;
	default:putchar('\a');
	}
	getchar();
	if(getchar()!=' ')
		printf("��ϲ���н���!"); //������������ϵͳ��ͣ������Ϊʲôsystem("pause");��������?
	return 0;
}
void print_star()
{
	printf("***********************************\n");
}
void print_sm()
{
	printf("�������Լ�������!!!\n");
}
