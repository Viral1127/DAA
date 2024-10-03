#include<stdio.h>

const  size = 5;
void enqueue(int);
int dequeue();
void insertAtFront(int);
void display();

struct queue{
	
	int a[5];
	int front;
	int rear;	
}qu;

void main(){
	int x;
	qu.front =-1;
	qu.rear = -1;
	
	
	int choice;
	printf(" you have following choices enter any one of them \t\n1 for enqueue , \t\n2 for dequeue , \t\n3 for peep , \t\n4 for change , \t\n5 for display , \t\n6 for quit \n");
	do{
		printf("Enter your choice ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 :
				printf("Enter a number : ");
				scanf(" %d",&x);
				enqueue(x);				
				break;
			case 2 :
				x = dequeue();
				break;
			case 3 :
				
				break;
			case 4 :
				
				break;
			case 5 :
				display();
				break;
			defult :
				printf("Please enter a valid choice");
		}
		
	}while(choice != 6);
	
	
	
	display();
}

void enqueue(int x){
	if(qu.rear == -1 && qu.front == -1){
		qu.front++;
	}
	qu.rear++;
	if(qu.rear>=size){
		printf("queue overrflow");
		qu.rear--;
		return;
	}
	qu.a[qu.rear] = x;	
	
}
// enqueue

int dequeue(){
	if(qu.rear == -1){
		printf("queue is empty");
		return;
	}
	qu.front++;
	if(qu.front>qu.rear){
		printf("queue underflow");
		qu.front--;
		return;
	}
	retunr qu.a[qu.front];
}
// dequeue

void insertAtFront(int){
	if(qu.front == -1){
		printf("queue orevflow");
	}
	// aa extra code baki chhe 
}


void display(){
	int i;
	for(i=qu.front;i<=qu.rear;i++){
		printf(" %d",qu.a[i]);
		
	}
}
// display

