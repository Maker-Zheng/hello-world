#include<stdio.h>
int main ()
{
	int m,n,a;
	printf("������������\n");
	scanf("%d %d",&m,&n);
	while(m%n!=0)//�������Լ�� 
	{
	a=m%n;
	m=n;
	n=a;
    }
    if(a==1)//�ж����Լ���Ƿ�Ϊ1 
	{
		printf("������������");
	 } 
	 else
	 {
	 	printf("��������������");
	  } 
	  return 0;
}
