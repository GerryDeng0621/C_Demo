#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",& ch);      //&为地址符，后接定义的字符ch得空格。若是int型则不要空格。
	switch(ch)
	{
	case'A':printf("1\n");break;
	case'B':printf("2\n");break;
	case'C':printf("3\n");break;
	default:putchar('\a\a\a');
	}
	return 0;
}
	