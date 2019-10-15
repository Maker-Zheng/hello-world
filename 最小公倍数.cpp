#include<stdio.h>
int main ()
{
	int m,n,a,b;
	printf("请输入两个数\n");
	scanf("%d %d",&m,&n);
	b=m*n;
	while(m%n!=0)//计算最大公约数 
	{
	a=m%n;
	m=n;
	n=a;
    }
    b=b/a;//计算最小公倍数 
	printf("两个数的小公倍数为%d\n",b);	
	return 0;
}
