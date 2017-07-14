#include "stdio.h"
#define N 100
double average(double a1[N],int l);      /*声明求平均数的函数*/
double max(double a2[N],int l);			/*声明求最高分的函数*/
double min(double a3[N],int l);			/*声明求最低分的函数*/
void rank1(double a4[N],int l);			/*声明排序函数（从低到高）*/
void rank2(double a5[N],int l);			/*声明排序函数（从高到低）*/
void main()
{
  double array[N],chinese,math,english;				/*定义array[N]用于存储学生各科成绩总和*/
  int ch,choose,i,num;
  double gpa,maxscore,minscore;
  char ans='y';

/*打印目录*/

  while(ans=='y')
  {
     printf("****************欢迎使用学生成绩管理系统*************************\n");
	 printf("\n");
	 printf("1.成绩录入\t\t\t\t2.成绩排名(由高到低)\n");
	 printf("\n");
	 printf("3.成绩排名(由低到高)\t\t\t4.平均分\n");
	 printf("\n");
	 printf("5.最高分\t\t\t\t6.最低分\n");
	 printf("\n");
	 printf("****************请输入您的操作***********************************\n");
	 scanf("%d",&ch);
      
/*用于判断是否第一次选择的功能是1，并且接受用户输入的成绩，并计算总成绩*/
	 if(ch==1)
	 {
			printf("请确定您要输入多少个学生的成绩：");
			scanf("%d",&num);
		    printf("\n\n请录入成绩:\n\n");
			for(i=0;i<num;i++)
			{
				printf("\n请输入学生%d的成绩\n",i+1);
				printf("语文：");
				scanf("%lf",&chinese);
				printf("数学：");
				scanf("%lf",&math);
				printf("英语：");
				scanf("%lf",&english);
				array[i]=chinese+math+english;
			}
			break;
	 }

	 else
	 {
			printf("\n\n目前还没有成绩，请您首先选择1进行成绩录入\n\n\n");
	 }

  }
		/*打印详细成绩*/
			printf("\n学生成绩信息表：\n");
			printf("*****************************************************************\n\n");
			printf("学号\t\t语文\t\t数学\t\t英语\t\t总成绩\n");
			for(i=0;i<num;i++)
			{
				printf("%d \t\t%.1lf \t\t%.1lf \t\t%.1lf \t\t%.1lf\n",i+1,chinese,math,english,array[i]);
			
			}

/*判断用户选择的功能，并调用相应的函数*/
		while(ans=='y')
			{
				ans=' ';
				printf("\n请选择系统功能：");
				scanf("%d",&choose);
			switch(choose)
			{
				 case 2:
							rank2(array,num);
					 break;
				case 3:
					       rank1(array,num);
					 break;
				case 4:
                    gpa=average(array,num);
		            printf("所有学生的平均成绩是： %.3lf\n",gpa);
					 break;
				 case 5:
					 maxscore=max(array,num);		 
					printf("所有学生成绩中最高分是： %.1lf\n",maxscore);
					  break;
				 case 6:
					 minscore=min(array,num);
					  printf("所有学生成绩中最低分是： %.1lf\n",minscore);
          break;
		 default: 
			 printf("\n选择错误，请选择正确的功能\n");
		 }
	    printf("\n您是否要继续？(y/n) ");
		fflush(stdin);
	    scanf("%c",&ans);
	}

}

double average(double a1[N],int l)
  {
		int i;
		double ave,sum=0;

        for(i=0;i<l;i++)
		{
		   sum=sum+a1[i];
		  
		}
			ave=sum/l;
			return ave;
  }

double max(double a2[N],int l)
 {
		int i;
		double max=a2[0];
		for(i=0;i<l;i++)
        {
		   if(max<a2[i])
		   {
				max=a2[i];
		   }
		
		}
			return max;
 
 }

 double min(double a3[N],int l)
 {
		int i;
		double min=a3[0];
		for(i=0;i<l;i++)
        {
		   if(min>a3[i])
		   {
				min=a3[i];
		   }
		
		}
			return min;
 
 }

void rank1(double a4[N],int l)
{
   int i,j;
   double t;
   for(j=0;j<l-1;j++)
   {
	   for(i=0;i<l-j-1;i++)
	   {
			if(a4[i]>a4[i+1])
			{
			   t=a4[i];
			   a4[i]=a4[i+1];
			  a4[i+1]=t;
			}
	   
	   }
   }
   printf("从低到高的顺序为：\n");
   for(i=0;i<l;i++)
   {
      printf("%.1lf  ",a4[i]);
   }

}
void rank2(double a5[N],int l)
{
   int i,j;
   double t;
   for(j=0;j<l-1;j++)
   {
	   for(i=0;i<l-j-1;i++)
	   {
			if(a5[i]>a5[i+1])
			{
			   t=a5[i];
			   a5[i]=a5[i+1];
			  a5[i+1]=t;
			}
	   
	   }
   }
   printf("从高到低的顺序为：\n");
   for(i=l-1;i>=0;i--)
   {
      printf("%.1lf  ",a5[i]);
   }

}