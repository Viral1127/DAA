#include<stdio.h>

void main(){
	int r;
	printf("Enter length of array : ");
	scanf("%d",&r);
	
	
	
	int a[r];
	int i,j;
	
	for(i=0;i<r;i++){
		printf("enter element number %d : ",i);
		scanf("%d",&a[i]);
	}
	
	for( i=0;i<r;i++){
		for( j=0;j<r;j++){
			if(a[i]<a[j]){
				int temp = a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	
	for(i=0;i<r;i++){
		printf(" %d",a[i]);
	}
	
	
	
}
