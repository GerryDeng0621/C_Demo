#include <stdio.h>
int main()
{
	int i,t,a;
	t=1;
	i=2;
    scanf("%d",&a);
    while(i<=a)
	{
	t=t*i;
	i=i+1;
	}
	printf("%d\n",t);
	system("pause");
	return 0;
}
