#include<stdio.h>
#include<math.h>
void menu()
{
 printf("                 |============================|\n");
 printf("                 |  1.��������;  2.����ת��;  |\n");
 printf("                 |============================|\n\n");
}
void fun1()//��������
{
 int a,b;
 char oper;
 printf("��������ʽ:");
 scanf("%d%c%d",&a,&oper,&b);
 switch(oper)
 {
 case '+':printf("���Ϊ:%d\n",a+b);break;
 case '-':printf("���Ϊ:%d\n",a-b);break;
 case '*':printf("���Ϊ:%d\n",a*b);break;
 case '/':printf("���Ϊ:%.2f\n",(float)a/b);break;
 case '%':printf("���Ϊ:%d\n",a%b);break;
 default:printf("��������!\n");break;
 }
}
void fun2()//����ת��
{
 int choice,value,i,j=0,k,t;
 char s[50];
 int a[4];
 printf("          ********************************************************\n");
 printf("               1.ʮ����ת���ɶ�����;     2.ʮ����ת����ʮ������;\n");
 printf("               3.������ת����ʮ����;     4.������ת����ʮ������;\n");
 printf("               5.ʮ������ת���ɶ�����;   6.ʮ������ת����ʮ����;\n");
 printf("          ********************************************************\n");
    printf("��ѡ��:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:printf("������ʮ������ֵ:");scanf("%d",&value);
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
    printf("���Ϊ:");
    for(i=j;i>=0;i--)
     printf("%c",s[i]);
    break;
    case 2:printf("������ʮ������ֵ:");scanf("%d",&value);
       printf("���Ϊ:%x",value);break;
 case 3:printf("�������������:");scanf("%s",s);
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
    printf("���Ϊ:%d\n",value);break;
 case 4:printf("�������������:");scanf("%s",s);
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
    printf("���Ϊ:%x\n",value);break;
 case 5:printf("������ʮ��������ֵ:");scanf("%x",&value);
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
    printf("���Ϊ:");
    for(i=j;i>=0;i--)
     printf("%c",s[i]);
    break;
  case 6:printf("������ʮ��������ֵ:");scanf("%x",value);
        printf("���Ϊ:%d\n",value);break;
  default:printf("ѡ������!\n");
       break;
 }
}
void main()
{
 int choice;
 while(choice!=0)
 {
  menu();
     printf("��ѡ��(0�˳�):");
     scanf("%d",&choice);
     if(choice==1)
      fun1();
     else if(choice==2)
      fun2();
     printf("\n");
 }
}