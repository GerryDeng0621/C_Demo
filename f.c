#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	int t;
	scanf("%lf",&a);
	t=sqrt(a); //t=(int)sqrt(a)Ҳ�С�
	if(a>1e-8&&a<1000)
		printf("%d\n",t);
	else
		printf("����������\n");
	return 0;
}
		


