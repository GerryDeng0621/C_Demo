#include<stdio.h>
int main()
{
	double a[20],t;
	int i,j;
	printf("������20��ʵ��,���ÿո����:\n");
    for(i=0;i<=19;i++)
		scanf("%lf",&a[i]);
	  for(j=0;j<19;j++)
		  for(i=0;i<19-j;i++)
			  if(a[i]>a[i+1])
			  {t=a[i];a[i]=a[i+1];a[i+1]=t;}
			  printf("��С��������Ϊ:\n");//�����û�ж���a[i],���Ǳ���������ѭ�������   
    for(i=0;i<=19;i++)
		printf("%6.2lf\t",a[i]); //������߱���������ô����ģ�Ҫ��Ȼ�Ͳ�֪��Ҫѭ�������
	system("pause");
	return 0;
}
	



			  
	  
		
	
