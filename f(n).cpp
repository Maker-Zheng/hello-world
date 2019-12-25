#include<stdio.h>
int main(){
	int i,n=2,m=1;
	while(1){
		int l=n,temp;
		while(l!=0){
			temp=l%10;
			if(temp==1){
				m++;
			}
			l/=10;
		}
		if(m==n){
			printf("%d",n);
			break;
		}
		n++;
	}
	return 0;
}
 
