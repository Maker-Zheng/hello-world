#include<stdio.h>
int main() {
	int a,b,c,d,x;
	scanf("��������%d��",&a);
	scanf("��Ӣ��%d��",&b);
	scanf("�����%d��",&c);
	scanf("������������%d��",&d);
	x=b+c+d-a;
	if(x>=0){
		printf("����������%d��",x);
	}else{
		printf("�������ݴ����޷�����"); 
	}
	 return 0;
} 
