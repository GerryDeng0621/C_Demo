#include <stdio.h>
int main()
{
	double sum=1.0,term,deno=2.0;
	while(deno<=160)
	{
		term=1/deno;
		sum=sum+term;
		deno=deno+1;
	}
	printf("%f\n",sum);
	system("pause");
	return 0;
}