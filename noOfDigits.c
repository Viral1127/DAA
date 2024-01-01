#include<stdio.h>

int noOfDigits(int);
void main(){
	int n = 125;
	printf(" %d",noOfDigits(n));
}

int noOfDigits(int n){
	if(n <= 0){
		return 0;
	}
	return 1+ noOfDigits(n/10);
}
