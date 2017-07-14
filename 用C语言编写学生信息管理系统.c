#include "stdio.h"
#define N 100
double average(double a1[N],int l);      /*������ƽ�����ĺ���*/
double max(double a2[N],int l);			/*��������߷ֵĺ���*/
double min(double a3[N],int l);			/*��������ͷֵĺ���*/
void rank1(double a4[N],int l);			/*�������������ӵ͵��ߣ�*/
void rank2(double a5[N],int l);			/*�������������Ӹߵ��ͣ�*/
void main()
{
  double array[N],chinese,math,english;				/*����array[N]���ڴ洢ѧ�����Ƴɼ��ܺ�*/
  int ch,choose,i,num;
  double gpa,maxscore,minscore;
  char ans='y';

/*��ӡĿ¼*/

  while(ans=='y')
  {
     printf("****************��ӭʹ��ѧ���ɼ�����ϵͳ*************************\n");
	 printf("\n");
	 printf("1.�ɼ�¼��\t\t\t\t2.�ɼ�����(�ɸߵ���)\n");
	 printf("\n");
	 printf("3.�ɼ�����(�ɵ͵���)\t\t\t4.ƽ����\n");
	 printf("\n");
	 printf("5.��߷�\t\t\t\t6.��ͷ�\n");
	 printf("\n");
	 printf("****************���������Ĳ���***********************************\n");
	 scanf("%d",&ch);
      
/*�����ж��Ƿ��һ��ѡ��Ĺ�����1�����ҽ����û�����ĳɼ����������ܳɼ�*/
	 if(ch==1)
	 {
			printf("��ȷ����Ҫ������ٸ�ѧ���ĳɼ���");
			scanf("%d",&num);
		    printf("\n\n��¼��ɼ�:\n\n");
			for(i=0;i<num;i++)
			{
				printf("\n������ѧ��%d�ĳɼ�\n",i+1);
				printf("���ģ�");
				scanf("%lf",&chinese);
				printf("��ѧ��");
				scanf("%lf",&math);
				printf("Ӣ�");
				scanf("%lf",&english);
				array[i]=chinese+math+english;
			}
			break;
	 }

	 else
	 {
			printf("\n\nĿǰ��û�гɼ�����������ѡ��1���гɼ�¼��\n\n\n");
	 }

  }
		/*��ӡ��ϸ�ɼ�*/
			printf("\nѧ���ɼ���Ϣ��\n");
			printf("*****************************************************************\n\n");
			printf("ѧ��\t\t����\t\t��ѧ\t\tӢ��\t\t�ܳɼ�\n");
			for(i=0;i<num;i++)
			{
				printf("%d \t\t%.1lf \t\t%.1lf \t\t%.1lf \t\t%.1lf\n",i+1,chinese,math,english,array[i]);
			
			}

/*�ж��û�ѡ��Ĺ��ܣ���������Ӧ�ĺ���*/
		while(ans=='y')
			{
				ans=' ';
				printf("\n��ѡ��ϵͳ���ܣ�");
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
		            printf("����ѧ����ƽ���ɼ��ǣ� %.3lf\n",gpa);
					 break;
				 case 5:
					 maxscore=max(array,num);		 
					printf("����ѧ���ɼ�����߷��ǣ� %.1lf\n",maxscore);
					  break;
				 case 6:
					 minscore=min(array,num);
					  printf("����ѧ���ɼ�����ͷ��ǣ� %.1lf\n",minscore);
          break;
		 default: 
			 printf("\nѡ�������ѡ����ȷ�Ĺ���\n");
		 }
	    printf("\n���Ƿ�Ҫ������(y/n) ");
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
   printf("�ӵ͵��ߵ�˳��Ϊ��\n");
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
   printf("�Ӹߵ��͵�˳��Ϊ��\n");
   for(i=l-1;i>=0;i--)
   {
      printf("%.1lf  ",a5[i]);
   }

}