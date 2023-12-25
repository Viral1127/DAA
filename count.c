#include <stdio.h>
int countDigit(int);

int main(){
	
	int n;
	
	printf("enter number :  ");
	scanf("%d" , &n);
	
	printf("total digits in number %d is %d" , n , countDigit(n));
	
}

int countDigit(int n){
	static int count = 0;
	if(n>0){
		count++;
		countDigit(n/10);
	}
	else{
		return count;
	}
}
