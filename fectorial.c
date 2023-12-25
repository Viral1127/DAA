#include <stdio.h>
int main(){
	printf("enter Number :  ");
	int n,i,fec=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fec = fec*i;	
	}
	printf("fectorial of %d is %d\n" ,n,fec);
	printf("recurtion thii %d",recursion(n));
}

int recursion(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*recursion(n-1);
	}
}
