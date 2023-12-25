#include<stdio.h>
int recursion(int , int);
int main(){
	
	int n,i,check;//5
	scanf("%d" , &n);
	
	check = recursion(n,n/2);
	if(check==1){
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}	
}

int recursion(int n , int i){
	if(i==1){
		return 1;
	}
	else{
		if(n%i==0){
			return 0;
		}
		else{
			return recursion(n,i-1);
		}
	}
}
