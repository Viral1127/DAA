#include<stdio.h>
//void printArray(int *a);
void main(){
	int r,c;
	printf("Enter number of row : ");
	scanf("%d",&r);
	
	printf("Enter number of column : ");
	scanf("%d",&c);
	
	int a[r][c],t[r][c];
	int i,j;
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf("Enter element (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
//	printArray(&a);
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			t[i][j] = a[j][i];
		}
	}
	
	for( i=0;i<r;i++){
		for( j=0;j<c;j++){
			printf(" %d",t[i][j]);
		}
		printf("\n");
	}
//	printArray(&a);
	
	
}

//void printArray(int *a){
//	int i,j;
//	for(i=0;i<sizeof(a)/sizeof;i++){
//		for(j=0;j<a[i].length){
//			printf(" %d",a[i][j]);
//		}
//		printf("\n");
//	}
//}
