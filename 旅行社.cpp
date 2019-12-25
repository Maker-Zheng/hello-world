#include<stdio.h>
int main() {
	int a,b,c,d,x;
	scanf("旅行社有%d人",&a);
	scanf("会英语%d人",&b);
	scanf("会俄语%d人",&c);
	scanf("两样都不会有%d人",&d);
	x=b+c+d-a;
	if(x>=0){
		printf("两样都会有%d人",x);
	}else{
		printf("输入数据错误，无法计算"); 
	}
	 return 0;
} 
