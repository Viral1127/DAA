#include<stdio.h>

void main(){
	binary(15);
}

void binary(int n){
	if(n == 0){
		
		return;
	}
	binary(n/2);
	printf("%d",n%2);
}
