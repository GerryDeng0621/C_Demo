#include<stdio.h>
#include<math.h>
void menu()
{
 printf("                 |============================|\n");
 printf("                 |  1.算术运算;  2.进制转换;  |\n");
 printf("                 |============================|\n\n");
}
void fun1()//算术运算
{
 int a,b;
 char oper;
 printf("请输入算式:");
 scanf("%d%c%d",&a,&oper,&b);
 switch(oper)
 {
 case '+':printf("结果为:%d\n",a+b);break;
 case '-':printf("结果为:%d\n",a-b);break;
 case '*':printf("结果为:%d\n",a*b);break;
 case '/':printf("结果为:%.2f\n",(float)a/b);break;
 case '%':printf("结果为:%d\n",a%b);break;
 default:printf("输入有误!\n");break;
 }
}
void fun2()//进制转换
{
 int choice,value,i,j=0,k,t;
 char s[50];
 int a[4];
 printf("          ********************************************************\n");
 printf("               1.十进制转换成二进制;     2.十进制转换成十六进制;\n");
 printf("               3.二进制转换成十进制;     4.二进制转换成十六进制;\n");
 printf("               5.十六进制转换成二进制;   6.十六进制转换成十进制;\n");
 printf("          ********************************************************\n");
    printf("请选择:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("请输入十进制数值:");scanf("%d",&value);
       while(value>=2)
    {
     if(value%2!=0)
      s[j++]='1';
     else
      s[j++]='0';
     value=value/2;
    }
    if(value==1)
     s[j]='1';
    printf("结果为:");
    for(i=j;i>=0;i--)
     printf("%c",s[i]);
    break;
    case 2:printf("请输入十进制数值:");scanf("%d",&value);
       printf("结果为:%x",value);break;
 case 3:printf("请输入二进制数:");scanf("%s",s);
       for(i=0;s[i]!='\0';i++);
    i--;value=0;
    for(j=0;j<=i;j++)
    {   t=1;
     if(s[j]=='1')
     { for(k=i-j;k>0;k--)
      t*=2;
       value+=t;
     }
    }
    printf("结果为:%d\n",value);break;
 case 4:printf("请输入二进制数:");scanf("%s",s);
       for(i=0;s[i]!='\0';i++);
    i--;value=0;
    for(j=0;j<=i;j++)
    {   t=1;
     if(s[j]=='1')
     { for(k=i-j;k>0;k--)
      t*=2;
       value+=t;
     }
    }
    printf("结果为:%x\n",value);break;
 case 5:printf("请输入十六进制数值:");scanf("%x",&value);
       while(value>=2)
    {
     if(value%2!=0)
      s[j++]='1';
     else
      s[j++]='0';
     value=value/2;
    }
    if(value==1)
     s[j]='1';
    printf("结果为:");
    for(i=j;i>=0;i--)
     printf("%c",s[i]);
    break;
  case 6:printf("请输入十六进制数值:");scanf("%x",value);
        printf("结果为:%d\n",value);break;
  default:printf("选择有误!\n");
       break;
 }
}
void main()
{
 int choice;
 while(choice!=0)
 {
  menu();
     printf("请选择(0退出):");
     scanf("%d",&choice);
     if(choice==1)
      fun1();
     else if(choice==2)
      fun2();
     printf("\n");
 }
}