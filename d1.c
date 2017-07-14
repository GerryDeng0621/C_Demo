#include<stdio.h>      //本程序的核心就是空格是新单词出现的标志。
int main()
{ 
	char str[1000000];  //字符串是从字符衍生出来的
    int mum=0,word=0,i; //这里必须给word赋初值。这是因为最开始输入单词时没空格！为什么word,num单独拿出来赋值就出错？(但有很多种定义，字符，字符串之类的，就可能单独会出错)
    char c;
	gets(str);     //gets()里面必须填字符串的名字。  而get()里面什么也不要填，他是输入字符              
	for(i=0;(c=str[i])!='\0';i++)    //   \0是结束符。
		if(c==' ')  //在if里面的叫等于==,不是赋值的=。
		{word=0;}
		else if(word==0)
		{
			word=1;
			mum++;
		}
	printf("总单词数word=%d\n",mum);
	return 0;
}





