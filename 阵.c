#include<stdio.h>
int main()
{
	char ch;
	ch='*';
	printf("%5c\n",ch);
	printf("%4c%c%c\n",ch,ch,ch);
	printf("%3c%c%c%c%c\n",ch,ch,ch,ch,ch);
	printf("%2c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch);
	printf("%c%c%c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch,ch,ch);
	printf("%2c%c%c%c%c%c%c\n",ch,ch,ch,ch,ch,ch,ch);
	printf("%3c%c%c%c%c\n",ch,ch,ch,ch,ch);
	printf("%4c%c%c\n",ch,ch,ch);
	printf("%5c\n",ch);
	system("pause");
	return 0;
}
