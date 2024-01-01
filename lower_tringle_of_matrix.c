#include<stdio.h>

void main(){
	int r,c;
	printf("Enter number of row : ");
	scanf("%d",&r);
	
	printf("Enter number of column : ");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j;
	
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("Enter element (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for( i=0;i<r;i++){
		
			
		for( j=0;j<c;j++){
			if(i>=j){			
				printf(" %d",a[i][j]);
			}
		}
		
		printf("\n");
	}
	
}
