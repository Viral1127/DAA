#include<stdio.h>

int gcd(int,int);
void main(){
	int a=21,b=15;
	printf(" %d",gcd(a,b));
}

int gcd(int a , int b){
	if(a<b){
		return gcd(b,a);
	}
	if(a%b == 0){
		return b;
	}
	return gcd(b,a%b);
}
