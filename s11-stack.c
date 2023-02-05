#include<stdio.h>
#include<stdlib.h>
int top=-1,a[4];
void pop()
{
	printf("pop operation:");
	if(top==-1){
		printf("stack is empty or Underflow\n");
	}
	else
	{
		top-=1;
	}
	
}
void push()
{
	int n=4,p;
	printf("push operation:\n");
	printf("enter push element=");
	scanf("%d",&p);
	if(top==n)
	{
		printf("stack is full or Overflow/n");
	}
	else
	{
		top+=1;
		a[top]=p;
		
	}
}
void display()
{
	int i;
	for(i=0;i<top;i++)
	{
		printf("%d ",a[i]);
	}
	exit(0);
}
void peek()
{
	printf("peek operation:");
}
int main()
{
	int i,x=1,s,n,top=-1;
	printf("stack Operation\n");
	printf("1:push\n2:pop\n3:peek\n4:display");
	printf("\nchoice=");
	scanf("%d",&s);
	while(x<10)
	{
		switch(s)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
		case 5:
			exit(0);
		default :
			printf("Invalid choice\n");
		return s=0;
	}
	     x+=1;
	
    }
}
