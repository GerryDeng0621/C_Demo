#include<stdio.h>
int main()
{
	char str[100];
	gets(str);
	printf("%s是猪!!!\n",str);  //得输出字符串名
	return 0;                 //字符串输出不需要循环。
}

