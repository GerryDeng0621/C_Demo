#include<stdio.h>
int main()
{
	char ch;
	double x,y,a,b;
    scanf("%lf,%lf,%c",&a,&b,&ch);
	x=a+b;
	y=a*b;
	if((ch=='A'||ch=='a')||(ch=='B'||ch=='b'))
		if(ch=='a'||ch=='A')
			printf("x=%2.2lf\n",x);
		else
			printf("y=%2.2lf\n",y);
	else
		printf("´íÎó\n");
	system("pause");
	return 0;
}