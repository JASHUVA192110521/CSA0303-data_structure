#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
# define size 5
int front=-1,rear=-1,x[size];
void display()
{
	int i,n;
	if(front==-1){
		printf("Queue is empty\n");
	}
	else{
	
	for(i=front;i<=rear;i++){
		printf("%d ",x[i]);
	}
    }
}
void push(){
	int n;
	printf("enter the element =");
	scanf("%d",&n);
	if(rear==size-1){
		printf("overflow\n");
	}
	else{
		
		rear++;
		x[rear]=n;
		if(front==-1){
			front = 0;
		}
	}
}
void pop(){
	if(rear==front && rear == size-1){
		front=rear=-1;
	}
	else{
		front++;
		
	}
}
main(){
	int n,c,i;
	while(c!=4){
		
	printf("\n1.ENqueue\n2.DEqueue\n3.DIsplay\n4.exit\n");
	printf("enter your choice operation=");
	scanf("%d",&c);
	switch(c){
		case 1:push();
		break;
		case 2:pop();
		break;
		case 3:display();
		break;
		case 4:
		    exit(0);
		    break;
		default:
			printf("\nInvalid input");
	}
	i++;
	}
	
}
