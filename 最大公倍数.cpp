#include<stdio.h>
int main ()
{
	int m,n,a,b;
	printf("������������\n");
	scanf("%d %d",&m,&n);
	while(m%n!=0)//�������Լ�� 
	{
	a=m%n;
	m=n;
	n=a;
    }
    b=m*n/a;//������С������ 
	printf("��������С������Ϊ%d\n",b);	
	return 0;
}
