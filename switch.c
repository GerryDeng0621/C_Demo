#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",& ch);      //&Ϊ��ַ������Ӷ�����ַ�ch�ÿո�����int����Ҫ�ո�
	switch(ch)
	{
	case'A':printf("1\n");break;
	case'B':printf("2\n");break;
	case'C':printf("3\n");break;
	default:putchar('\a\a\a');
	}
	return 0;
}
	