#include<stdio.h>

void main(){
	int a[5];
	int i,j,key;
	
	for(i=0;i<5;i++){
		printf("Enter a number : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		key = a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=key;
	}
	
	for(i=0;i<5;i++){
		printf(" %d",a[i]);
	}
}
