#include<stdio.h>
int recursion(int n);
int main(){
	
	printf("enter number :  ");
	int n,i,sum=0;
	scanf("%d" , &n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum of 1 to %d is %d\n",n,sum);
	printf("recursion thii sum %d",recursion(n));

}

int recursion(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+recursion(n-1);
	}
	
}
