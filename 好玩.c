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
	printf("请再输入1,2,3中的一个数字。看你运气了，哈哈!\n");
	scanf("%d",&t);
	switch(t)
	{
	case 1:printf("%s有个妹子好像在想你哟!\n",str);break;
	case 2:printf("%s你是猪么?\n",str);break;
	case 3:printf("%s辍笔一个!\n",str);break;
	default:putchar('\a');
	}
	getchar();
	if(getchar()!=' ')
		printf("恭喜你中奖了!"); //这里是让其在系统中停留；而为什么system("pause");不可以呢?
	return 0;
}
void print_star()
{
	printf("***********************************\n");
}
void print_sm()
{
	printf("请输入自己的名字!!!\n");
}
