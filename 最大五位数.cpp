#include<stdio.h>
int main () {
	int a[6]={0};
	int i,n=5;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j,k,l;
	for(j=0;j<n;j++){
		for(k=0;k<n-1;k++){
			if(a[k]<a[k+1]){
				l=a[k];
				a[k]=a[k+1];
				a[k+1]=l;
			}
		}
	}
	int sum=0,temp=10000;
	for(i=0;i<n;i++){
		sum+=temp*a[i];
		temp=temp/10;
	}
	printf("%d",sum);
	return 0;
}
