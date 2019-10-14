#include<stdio.h>
int main ()
{
	int m,n,a;
	printf("请输入两个数\n");
	scanf("%d %d",&m,&n);
	while(m%n!=0)//计算最大公约数 
	{
	a=m%n;
	m=n;
	n=a;
    }
    if(a==1)//判断最大公约数是否为1 
	{
		printf("这两个数互质");
	 } 
	 else
	 {
	 	printf("这两个数不互质");
	  } 
	  return 0;
}
