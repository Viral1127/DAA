#include<stdio.h>
void printArray(int [],int, int);
void main(){
	int a [] = {1,2,3,4,5,6,8,7,8,8,};
	printf("%d -------",sizeof(a)/sizeof(int));
	printArray(a,0,sizeof(a)/sizeof(int));
}

void printArray(int a [],int i,int n){

	if(i>=n){
		return;
	}
	printf(" %d",a[i]);
	
	printArray(a,i+1,n);
}
