#include<stdio.h>
const size = 5;


void display();
void push();
int peep();
int pop();
void change();
struct stack{
	int top;
	int a[5];
	
}st;

void main(){
	st.top = -1;
	int choice;
	printf(" you have following choices enter any one of them \t\n1 for push , \t\n2 for pop , \t\n3 for peep , \t\n4 for change , \t\n5 for display , \t\n6 for quit \n");
	do{
		printf("Enter your choice ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 :
				push();
				break;
			case 2 :
				printf("%d\n",pop());
				break;
			case 3 :
				printf("%d\n",peep());
				break;
			case 4 :
				change();
				break;
			case 5 :
				display();
				break;
			defult :
				printf("Please enter a valid choice");
		}
		
	}while(choice != 6);
	
}

void push(){
	int x;
	printf("Enter a number ");
	scanf("%d",&x);
	st.top++;
	if(st.top >= size){
		printf("Stack overflow");
		st.top--;
		return;
	}
	else{
		st.a[st.top] = x;
	}
	
} //push

int peep(){
	if(st.top<0){
		printf("Stack underflow");
		return -1;
	}	
	else if(st.top > size){
		printf("Stack underflow");
		return -1;
	}
	else{
		return st.a[st.top];
			
	}
} //peep


int pop(){
	int x = st.a[st.top];
	st.top--;
	if(st.top < 0){
		printf("Stack underflow");
		return -1;
	}
	return x;
}//pop


void change(){
	printf("Enter new value : ");
	int x;
	scanf("%d",&x);
	
	printf("Enter place of the element from top that you want to change : ");
	int index;
	scanf("%d",&index);
	
	if(st.top-index-1 <0){
		printf("Stack underflow");
	}
	else{
		st.a[st.top-index-1] = x;
	}
}

void display(){
	int i;
	for(i=0;i<=st.top;i++){
		printf(" %d",st.a[i]);
	}
	printf("\n");
}
