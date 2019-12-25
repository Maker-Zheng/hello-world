#include<stdio.h>
void x(int a[],int y,int c);
int k=0,b[120];
int main(){
	int a[5];
	int i,j,temp,t=0,cnt=0,n;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	x(a,0,4);
	for(i=0;i<k-1;i++){
		for(j=0;j<k-2;j++){
			if(b[j]<b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	for(i=0;i<k;i++){
		for(j=2;j<b[i];j++){
			if(b[i]%j==0){
				t++;
			}
		}
		if(t==0){
			printf("%d",b[i]);
			cnt++;
			break;
		}
		t=0;
	}
	if(cnt==0){
		printf("error");
	}
	return 0;
}
void x(int a[],int y,int c){
	int i,temp;
	if(y==c){
		b[k]=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
		k++;
	}
	    for(i=y;i<5;i++){
	    	temp=a[y];
	    	a[y]=a[i];
	    	a[i]=temp;
	    	x(a,y+1,c);
	    	temp=a[y];
	    	a[y]=a[i];
	    	a[i]=temp;
	    } 
	    return;
}

