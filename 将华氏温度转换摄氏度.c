#include<stdio.h>
int main()
{
	float c,f;
	printf("请输入华氏温度:");
	scanf("%f",&f);
	c=(5.0/9)*(f-32);
	printf("输出摄氏度为:");
	printf("%f\n",c);
	system("pause");
   return 0;
}