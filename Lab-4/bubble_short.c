#include<stdio.h>


void main(){
	int a [5];
	int i,j;
	for(i=0;i<5;i++){
		printf("Enter a number : ");
		scanf("%d",&a[i]);
	}
	
	int flag = 0;
	for(i=0;i<5;i++){
		for(j=0;j<5-1-i;j++){			
			if(a[j]>a[j+1]){
				flag =1;
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;				
			}
		}
		if(!flag){
			break;
		}
		flag = 0;
		
	}
	
	for(i=0;i<5;i++){
		printf(" %d",a[i]);
	}
}
