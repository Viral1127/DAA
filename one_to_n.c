#include<stdio.h>
int main(){
	printf("enter number");
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n\n",i);
	}
	printf("%d\n" , recursion(n));//5
}

void recursion(int n){//2
	if(n==1){//5!=1
		return 1;//1
	}
	else{
		printf("%d\n",n);
		recursion(n-1);//2-1=1
		
	}
}
