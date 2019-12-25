#include<stdio.h>
int x(int l){
	int j,temp=l;
	int t=0,cnt=0;
	int k=10;
	while(temp!=0){
		temp=temp/10;
		cnt ++;
	}
	int sum1=0,sum2=0;
	while(l!=0){
		temp=l%k;
		sum1+=temp;
		sum2+=temp*temp;
		l/=10;
	}
	for(j=3;j<sum1;j++){
			if(sum1%j==0){
				t++;
			}
		}
		for(j=3;j<sum2;j++){
			if(sum2%j==0){
				t++;
			}
		}
		if(t==0) return 1;
		else return 0;
}
int main () {
	int i,j,a=0,cnt=0,sum=0,t=0;
	for(i=100;i<=10000;i++){
		for(j=3;j<i;j++){
			if(i%j==0){
				t++;
			}
		}
		if(t==0){
			a=x(i);
			if(a==1){
				sum=sum+i;
				cnt++;
				printf("%d\n",i);
			}
	}
		a=0,t=0;
	}
	int x;
	x=sum/cnt;
	printf("%d",x);
	return 0;
}

